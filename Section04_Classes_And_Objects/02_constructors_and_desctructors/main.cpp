/**
 * @file    main.cpp
 * @brief   Demonstrates the Car class: the default constructor plus
 *          filling fuel/accelerating, and the parameterized constructor,
 *          printing the resulting dashboard state for each.
 * @author  Mohamed Atef
 * @date    2026-09-14
 */

/*===========================================================================*
 *                          F I L E  I N C L U S I O N S                     *
 *===========================================================================*/
#include "Car.h"

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
    Car car;

    car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Dashboard();

    Car car2(20.0f, 0.0, 4);
    car2.Dashboard();

    return 0;
}
