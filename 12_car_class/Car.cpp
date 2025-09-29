// The implementation of a Car class
#include "Car.hpp"
#include <string>
#include <iostream>

// No-arg constructor
Car::Car()
{
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);

    // TODO
    setMileage(0.0);
    setFuelLevel(0.0);
    setFuelCapacity(12.0);    
}

Car::Car(std::string make, std::string model, int year, double mpg, double mileage, double fuel_level, double fuel_capacity)
{
    setMake(make);
    setModel(model);
    setYear(year);
    setMPG(mpg);

    // TODO
    setMileage(mileage);
    setFuelLevel(fuel_level);
    setFuelCapacity(fuel_capacity);
}

// Setters
void Car::setMake(std::string newMake)
{
    if (!newMake.empty())
    {
        make = newMake;
    }
}
void Car::setModel(std::string newModel)
{
    if (!newModel.empty())
    {
        model = newModel;
    }
}    
void Car::setYear(int newYear)
{
    year = (newYear >= 1900 && newYear <= 2025) ? newYear : 1900;
}
void Car::setMPG(double newMPG)
{
    mpg = (newMPG > 0) ? newMPG : 0;
}

// TODO
void Car::setMileage(double newMileage)
{
    mileage = (newMileage >= 0.0) ? newMileage : 0.0;
}
void Car::setFuelLevel(double newFuel_Level)
{
    fuel_level = (newFuel_Level >= 0.0) ? newFuel_Level : 0.0;
}
void Car::setFuelCapacity(double newFuel_Capacity)
{
    fuel_capacity = (newFuel_Capacity >= 12.0 && newFuel_Capacity <= 18.0) ? newFuel_Capacity : 12.0;
}

// Getters    
std::string Car::getMake() const
{
    return make;
}
std::string Car::getModel() const
{
    return model;
}
int Car::getYear() const
{
    return year;
}
double Car::getMPG() const
{
    return mpg;
}

// TODO
double Car::getMileage() const
{
    return mileage;
}
double Car::setFuelLevel() const
{
    return fuel_level;
}
double Car::setFuelCapacity() const
{
    return fuel_capacity;
}

// Print
void Car::print() const
{
    std::cout << getMake() << std::endl;
    std::cout << getModel() << std::endl;
    std::cout << getYear() << std::endl;
    std::cout << getMPG() << std::endl;
    
}

// TODO
void Car::refuel(double gallons)
{
    if (gallons >= fuel_capacity)
    {
        fuel_level = fuel_capacity;
    }
    else
    {
        fuel_level += gallons;
    }
}

void Car::drive(double distance)
{
    double miles = mpg * fuel_level;
    if (miles >= distance)
    {
        std::cout << "Car " << make << ", " << model <<" is driving!" << std::endl;
    }
    else
    {
        std::cout << "Car is not driving." << std::endl;
    }
}