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
