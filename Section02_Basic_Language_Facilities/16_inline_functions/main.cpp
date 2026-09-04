/**
 * @file    main.cpp
 * @brief   Demonstrates inline functions in a nutshell: the inline keyword
 *          is a (non-binding) hint that a small function's body may be
 *          substituted at the call site to avoid call overhead, and —
 *          more importantly in modern C++ — it lets the same definition
 *          appear in multiple translation units (e.g. via a header)
 *          without violating the One Definition Rule. The example also
 *          contrasts an inline function with a function-like macro, which
 *          re-evaluates its argument expression every time it is used.
 * @author  Mohamed Atef
 * @date    2026-05-23
 */

/*===========================================================================*
 *                          F I L E  I N C L U S I O N S                     *
 *===========================================================================*/
#include <iostream>
#include <limits>
using namespace std;

/*===========================================================================*
 *                                M A C R O S                                *
 *===========================================================================*/
/* Function-like macro: the preprocessor pastes its argument text wherever
 * x appears, so the argument expression is evaluated once per occurrence. */
#define SQUARE_MACRO(x) ((x) * (x))

/*===========================================================================*
 *                             U S E R  T Y P E S                            *
 *===========================================================================*/
/* None */

/*===========================================================================*
 *                       S T A T I C  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Computes the square of an integer.
 * @param   n  Value to square; evaluated exactly once.
 * @return  n * n.
 * @note    inline is only a hint: the compiler is free to inline this
 *          function or not regardless of the keyword. Its real, guaranteed
 *          effect is permitting an identical definition to appear in
 *          multiple translation units without an ODR violation.
 */
inline int Square(int n)
{
    return n * n;
}

/**
 * @brief   Returns 5, printing a message so each call is observable.
 * @return  The value 5.
 */
static int GetValueWithSideEffect()
{
    static int callCount{0};
    ++callCount;
    cout << "  (GetValueWithSideEffect called, call #" << callCount << ")" << endl;
    return 5;
}

/*===========================================================================*
 *                       G L O B A L  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    cout << "Square(4): " << Square(4) << endl;
    cout << "SQUARE_MACRO(4): " << SQUARE_MACRO(4) << endl;

    /* The pitfall of function-like macros: the argument expression is
     * substituted verbatim, so it gets evaluated once per use inside the
     * macro body. Calling an inline function evaluates the argument once,
     * no matter how many times its parameter is used in the body. */
    cout << "Square(GetValueWithSideEffect()):" << endl;
    cout << "  result: " << Square(GetValueWithSideEffect()) << endl;

    cout << "SQUARE_MACRO(GetValueWithSideEffect()):" << endl;
    cout << "  result: " << SQUARE_MACRO(GetValueWithSideEffect()) << endl;
}
