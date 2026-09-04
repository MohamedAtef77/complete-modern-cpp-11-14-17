/**
 * @file    main.cpp
 * @brief   Demonstrates references used as function parameters: passing an
 *          int by reference as an output/in-out parameter (add, factorial)
 *          and swapping two variables through reference parameters (swap).
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
/* None */

/*===========================================================================*
 *                             U S E R  T Y P E S                            *
 *===========================================================================*/
/* None */

/*===========================================================================*
 *                       S T A T I C  F U N C T I O N S                      *
 *===========================================================================*/
/* None */

/*===========================================================================*
 *                       G L O B A L  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Computes the sum of two integers.
 * @param   a       First operand.
 * @param   b       Second operand.
 * @param   result  Output parameter set to a + b.
 */
void add(int a, int b, int &result)
{
    result = a + b ;
}

/**
 * @brief   Computes the factorial of a non-negative integer.
 * @param   a       Value to compute the factorial of; consumed by the loop.
 * @param   result  Output parameter set to a!.
 */
void factorial(int a, int &result)
{

    result = 1 ;
    while(a > 0)
    {
        result *= a;
        a--;
    }
}

/**
 * @brief   Swaps the values of two integers in place.
 * @param   a  First variable, receives b's original value.
 * @param   b  Second variable, receives a's original value.
 */
void swap(int &a, int &b)
{
    int temp{};

    temp = a;
    a = b;
    b = temp;
}

/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    int sum;
    int result;
    int x{3};
    int y{7};

    add(2, 3, sum);
    cout << "sum: " << sum << endl;

    factorial(5, result);
    cout << "factorial: " << result << endl;

    cout << "before swap -> x: " << x << ", y: " << y << endl;
    swap(x, y);
    cout << "after swap  -> x: " << x << ", y: " << y << endl;
}