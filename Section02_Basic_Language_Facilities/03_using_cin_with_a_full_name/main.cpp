/**
 * @file    main.cpp
 * @brief   Minimal "Hello, World" program marking the starting point for
 *          exploring basic C++ language facilities.
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
    char name[100];


    /* Motivation */
    cout << "Enter your full name: " ;
    cin >> name; 

    cout << "Your full name is: ";
    cout << name;

    /* Clean the remaining text in the buffer first */
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your name again (it will work this time wink wink): ";
    cin.getline(name,100,'\n');

    cout << "Your full name is: " << name << endl;

}