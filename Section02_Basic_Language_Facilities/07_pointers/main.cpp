/**
 * @file    main.cpp
 * @brief   Demonstrates basic pointer usage: taking the address of a
 *          variable with the address-of operator, storing it in a pointer,
 *          and dereferencing the pointer to access the pointed-to value.
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
    int x{10};
    int *ptr{&x};

    int *ptr2; /* Some compilers won't allow you to do this */
    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl; /* Dereference Operator */

    *ptr = 12; 

    cout << *ptr << endl; 

    *ptr = *ptr + 1 ; 

    cout << *ptr << endl;


    ptr2 = nullptr; 
}