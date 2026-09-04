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
    int x{10}; /* Referent */
    int y{12};



    int &ref = x; 
    
    cout << x << endl;
    cout << ref << endl;
    
    
    cout << &x << endl;
    cout  << &ref << endl; /* This is the big shot, the reference doesn't have an address */

    ref = y ; /* This doesn't bind ref to y, it assigns its referent with the current value of y */
    cout << ref << endl;
    cout << x << endl; 

#if false 
    int &ref2; /* Will cause a compilation error */
#endif
}