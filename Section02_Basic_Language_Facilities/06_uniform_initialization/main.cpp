/**
 * @file    main.cpp
 * @brief   Demonstrates uniform initialization (assignment, brace, and
 *          parenthesis syntax) across the primitive types, default
 *          value-initialization with empty braces, and brace-initializing
 *          dynamically allocated objects with new.
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
    int a1 = 1; /* Initialization using assignment operator */
    int a2{2};
    int a3(3);

    char d1[] = {'H','e','l','l','o'};
    char d2[] = "Hello";
    char d3[]{"Hello"};


    int i1{}; /* Using empty braces the variable will be initialized to its default value */

    float b1{}; /* Using empty braces the variable will be initialized to its default value */
    double c1{}; /* Using empty braces the variable will be initialized to its default value */
    char e1{}; /* Using empty braces the variable will be initialized to its default value */
    bool f1{}; /* Using empty braces the variable will be initialized to its default value */
    short g1{}; /* Using empty braces the variable will be initialized to its default value */
    long h1{}; /* Using empty braces the variable will be initialized to its default value */
    unsigned int j1{}; /* Using empty braces the variable will be initialized to its default value */

    cout << "a1: " << a1 << ", a2: " << a2 << ", a3: " << a3 << endl;
    cout << "d1: " << d1 << ", d2: " << d2 << ", d3: " << d3 << endl;
    cout << "i1: " << i1 << endl;
    cout << "b1: " << b1 << endl;
    cout << "c1: " << c1 << endl;
    cout << "e1: " << e1 << endl;
    cout << "f1: " << f1 << endl;
    cout << "g1: " << g1 << endl;
    cout << "h1: " << h1 << endl;
    cout << "j1: " << j1 << endl;

    /* Brace-initialization also works for dynamically allocated objects */
    int *p1 = new int{};              /* Single int, value-initialized to 0 */
    int *p2 = new int[8]{};           /* Array of 8 ints, all value-initialized to 0 */
    char *p3 = new char[100]{"Hello"}; /* Char array, brace-initialized from a string literal */
}