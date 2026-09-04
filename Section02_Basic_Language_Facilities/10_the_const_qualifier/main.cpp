/**
 * @file    main.cpp
 * @brief   Demonstrates the const qualifier: a const global constant, const
 *          reference function parameters that forbid modifying the argument,
 *          and the pointer-to-const vs. const-pointer distinction.
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
 *                       G L O B A L  V A R I A B L E S                      *
 *===========================================================================*/
const double PI{3.14};

/*===========================================================================*
 *                       S T A T I C  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Computes the area of a circle.
 * @param   radius  Circle radius, taken by const reference so the function
 *                   cannot modify the caller's argument.
 * @return  PI * radius^2
 */
static double computeArea(const double &radius)
{
    return PI * radius * radius;
}

/**
 * @brief   Computes the circumference of a circle.
 * @param   radius  Circle radius, taken by const reference so the function
 *                   cannot modify the caller's argument.
 * @return  2 * PI * radius
 */
static double computeCircumference(const double &radius)
{
    return 2 * PI * radius;
}

/*===========================================================================*
 *                       G L O B A L  F U N C T I O N S                      *
 *===========================================================================*/
/**
 * @brief   Program entry point.
 * @return  Implicitly 0 on successful execution.
 */
int main(void)
{
    double rad{};

    cout << "Enter the radius of the circle: ";
    cin >> rad;

    const double AREA{computeArea(rad)};
    const double CIRCUMFERENCE{computeCircumference(rad)};

    cout << "Area: " << AREA << endl;
    cout << "Circumference: " << CIRCUMFERENCE << endl;

    /* Pointer to const: rad cannot be modified through ptrToConst,
     * but ptrToConst itself can be repointed. */
    const double *ptrToConst{&rad};

    /* Const pointer: CONST_PTR always points to rad, but *CONST_PTR
     * can still be modified through it. */
    double *const CONST_PTR{&rad};

    *CONST_PTR = 5.0;
    cout << "rad after modifying through CONST_PTR: " << *ptrToConst << endl;
}