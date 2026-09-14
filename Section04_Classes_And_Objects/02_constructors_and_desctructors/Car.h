/**
 * @file    Car.h
 * @brief   Declares the Car class: a simple demo of encapsulating a car's
 *          fuel level, speed, and passenger count behind member functions.
 * @author  Mohamed Atef
 * @date    2026-09-14
 */

#pragma once

/*===========================================================================*
 *                             U S E R  T Y P E S                            *
 *===========================================================================*/
/**
 * @brief   Represents a car with fuel, speed, and passenger state.
 */
class Car
{
private:
    double fuel;
    double speed;
    int passengers;

public:
    /**
     * @brief   Constructs a Car with fuel, speed, and passengers set to zero.
     */
    Car();

    /**
     * @brief   Constructs a Car with the given fuel, speed, and passengers.
     * @param   fuel        Initial fuel amount.
     * @param   speed       Initial speed.
     * @param   passengers  Initial passenger count.
     */
    Car(float fuel, double speed, int passengers);

    /**
     * @brief   Destroys the Car, printing a farewell message.
     */
    ~Car();

    /**
     * @brief   Sets the car's fuel level.
     * @param   amount  New fuel amount.
     */
    void FillFuel(float amount);

    /**
     * @brief   Increases speed by one unit and consumes fuel accordingly.
     */
    void Accelerate(void);

    /**
     * @brief   Brings the car to a stop by resetting speed to zero.
     */
    void Brake(void);

    /**
     * @brief   Sets the number of passengers in the car.
     * @param   count   New passenger count.
     */
    void AddPassengers(int count);

    /**
     * @brief   Prints the current fuel, speed, and passenger count.
     */
    void Dashboard(void);
};
