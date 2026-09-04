/**
 * @file    main.cpp
 * @brief   Demonstrates range-based for loops: iterating over an array
 *          by value (read-only), and by reference to modify its elements
 *          in place (a const reference could be used instead to allow
 *          read-only access without copying each element).
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
    int arr[]{1,2,3,4,5,6};

    for(auto x:arr)
    {
        cout << x << "\t"; 
    }

    cout << endl; 

    for(auto &x:arr) /* by reference, so incrementing x modifies the array element (a const reference would allow read-only access instead) */
    {
        x++;
    }

    for(auto x:arr)
    {
        cout << x << "\t"; 
    }
     cout << endl;

    for(auto x: {10,20,30})
    {
        cout << x << "\t";
    }

    cout << endl;

    int *beg = std::begin(arr); // arr
    int *end = std::end(arr);

    while (beg != end)
    {
        std::cout << *beg << "\t";
        ++beg;
    }

    cout << endl;


    auto _beg = std::begin(arr); // arr
    auto _end = std::end(arr);

    while (_beg != _end)
    {
        std::cout << *_beg << "\t";
        ++_beg;
    }

    cout << endl;
}
