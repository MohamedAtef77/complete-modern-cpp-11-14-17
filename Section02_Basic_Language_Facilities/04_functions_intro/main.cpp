/**
 * @file    main.cpp
 * @brief   Introduces free functions by defining a simple add() helper
 *          and calling it from main().
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
 * @param   a   First addend.
 * @param   b   Second addend.
 * @return  Sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    int x{1}, y{4};

    cout << add(x,y) << endl;
}