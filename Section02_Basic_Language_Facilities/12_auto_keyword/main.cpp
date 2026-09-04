/**
 * @file    main.cpp
 * @brief   Demonstrates the auto keyword for automatic type deduction.
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
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    auto i{1};     /* deduced as int, from the literal 1 */
    auto j{2};     /* deduced as int, from the literal 2 */
    auto k{i+j};   /* deduced as int, the type of i+j */

    static auto y = 12;
    cout << i << "\t" << j << "\t" << k << endl;

    auto &ref{i};       /* deduced as int&, a reference to i */
    ref = 100;          /* modifies i through ref */
    cout << "i: " << i << ", ref: " << ref << endl;

    const auto &constRef{j}; /* deduced as const int&, cannot modify j through it */
    // constRef = 5;         /* Error: cannot assign through a reference to const */
    cout << "j: " << j << ", constRef: " << constRef << endl;
}
