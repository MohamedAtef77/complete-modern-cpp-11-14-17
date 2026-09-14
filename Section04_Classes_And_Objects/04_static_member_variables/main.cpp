/**
 * @file    main.cpp
 * @brief   Demonstrates the Car class's static totalCount member and its
 *          static GetTotalCount() accessor: shows the count changing as
 *          Car objects come into and go out of scope, and that a static
 *          member function can be called through the class itself
 *          (Car::GetTotalCount()) with no Car object required, as well
 *          as through an existing object.
 * @author  Mohamed Atef
 * @date    2026-09-14
 */

/*===========================================================================*
 *                          F I L E  I N C L U S I O N S                     *
 *===========================================================================*/
#include "Car.h"
#include <iostream>

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
    // Called through the class name -- no Car object exists yet.
    std::cout << "Total cars: " << Car::GetTotalCount() << std::endl;

    Car car;

    car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Dashboard();

    // Called through the class name again, now that "car" is alive.
    std::cout << "Total cars: " << Car::GetTotalCount() << std::endl;

    {
        Car car2(20.0f, 0.0, 4);
        car2.Dashboard();

        // A static member function may also be called through an object,
        // but it still operates on the one shared totalCount, not car2's
        // own state.
        std::cout << "Total cars: " << car2.GetTotalCount() << std::endl;
    }

    // "car2" has been destroyed, so the count drops back down.
    std::cout << "Total cars: " << Car::GetTotalCount() << std::endl;

    return 0;
}
