/**
 * @file    main.cpp
 * @brief   Demonstrates function overloading: multiple functions named
 *          Add, distinguished by their parameter types, with the compiler
 *          selecting the best match at each call site (including through
 *          an implicit floating-point promotion when no exact match
 *          exists); and multiple functions named Print, distinguished by
 *          the constness of the pointee, with the compiler picking the
 *          overload based on whether the argument points to a const int.
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
 * @brief   Adds two integers.
 * @param   a  First operand.
 * @param   b  Second operand.
 * @return  a + b as an int.
 */
int Add(int a, int b)
{
    return a + b;
}

/**
 * @brief   Adds two doubles.
 * @param   a  First operand.
 * @param   b  Second operand.
 * @return  a + b as a double.
 */
double Add(double a, double b)
{
    return a + b;
}
/**
 * @brief   Prints the pointed-to value through a non-const pointer.
 * @param   ptr  Pointer to a mutable int; selected when the argument
 *               points to a non-const int.
 */
void Print(int *ptr)
{
    cout << "Print(int*)       -> " << *ptr << endl;
}

/**
 * @brief   Prints the pointed-to value through a pointer to const.
 * @param   cPtr  Pointer to a const int; selected when the argument
 *                points to a const int.
 */
void Print(const int *cPtr)
{
    cout << "Print(const int*) -> " << *cPtr << endl;
}
/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    cout << "Add(2, 3): " << Add(2, 3) << endl;             /* exact match -> int overload */
    cout << "Add(2.5, 3.5): " << Add(2.5, 3.5) << endl;     /* exact match -> double overload */
    cout << "Add(2.5f, 3.5f): " << Add(2.5f, 3.5f) << endl; /* no exact match -> floats are promoted to double, not int */

    int x{42};
    const int y{99};

    Print(&x); /* &x is int* -> non-const overload */
    Print(&y); /* &y is const int* -> const overload */
}
