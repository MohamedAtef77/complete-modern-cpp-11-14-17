/**
 * @file    Car.cpp
 * @brief   Defines the Car class member functions declared in Car.h.
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
int Car::totalCount = 0;

/**
 * @brief   Constructs a Car with fuel, speed, and passengers defaulted
 *          via their non-static data member initializers, and
 *          increments the live Car object count.
 */
Car::Car()
{
    totalCount++;
}

/**
 * @brief   Constructs a Car with the given fuel, speed, and passengers,
 *          and increments the live Car object count.
 * @param   fuel        Initial fuel amount.
 * @param   speed       Initial speed.
 * @param   passengers  Initial passenger count.
 */
Car::Car(float fuel, double speed, int passengers)
{
    this->fuel = fuel;
    this->speed = speed;
    this->passengers = passengers;
    totalCount++;
}

/**
 * @brief   Destroys the Car, printing a farewell message and
 *          decrementing the live Car object count.
 */
Car::~Car()
{
    std::cout << "You are leaving the object hahhaa" << std::endl;
    totalCount--;
}

void Car::FillFuel(float amount)
{
    fuel = amount;
}

void Car::Accelerate(void)
{
    speed++;
    fuel -= 0.5f;
}

void Car::Brake(void)
{
    speed = 0;
}

void Car::AddPassengers(int count)
{
    passengers = count;
}

void Car::Dashboard(void)
{
    std::cout << "Fuel:" << fuel << std::endl;
    std::cout << "Speed:" << speed << std::endl;
    std::cout << "Passengers:" << passengers << std::endl;
}

int Car::GetTotalCount(void)
{
    return totalCount;
}
