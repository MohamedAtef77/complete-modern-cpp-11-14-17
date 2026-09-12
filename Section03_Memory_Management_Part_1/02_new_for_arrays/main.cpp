/**
 * @file    main.cpp
 * @brief   Demonstrates the new operator: dynamically allocating a single
 *          int on the heap, initialized to a given value, and printing
 *          both its address and the value stored at that address.
 * @author  Mohamed Atef
 * @date    2026-05-23
 */

/*===========================================================================*
 *                          F I L E  I N C L U S I O N S                     *
 *===========================================================================*/
#include <iostream>
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
    int *arr = new int[5]; 

    for(int i = 0; i != 5; ++i)
    {
        arr[i] = i; 
    }

    for(int i = 0; i != 5; ++i)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;


    delete[] arr;


    /* We could've used uniform initialization */


    int *arr2 = new int[5]{1,2,3,4,5};


    for(int i = 0; i != 5; ++i)
    {
        cout << arr2[i] << "\t";
    }
}