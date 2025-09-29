// Header file (.hpp, .h)
// Description of the class
#include <string>

/*
    TODO
    Add:
    Mileage: the odometer of the car
    fuel_capacity: tank capacity of the car
    fuel_level: current fuel in gallons

    Methods:
    void refuel(double gallons);
    void drive(double distance); if car has enough fuel to drive the given distance print <Car (make, model) is driving!>
*/

class Car
{
    public:
        // Constructors
        Car(); // No-arg
        Car(std::string make, std::string model, int year, double mpg, double mileage, double fuel_level, double fuel_capacity);

        // Getters
        // Constant methods - cannot modify class properties
        std::string getMake() const;
        std::string getModel() const;
        int getYear() const;
        double getMPG() const;

        double getMileage() const;
        double setFuelLevel() const;
        double setFuelCapacity() const;

        // Setters
        void setMake(std::string newMake);
        void setModel(std::string newModel);
        void setYear(int newYear);
        void setMPG(double newMPG);

        void setMileage(double mileage);
        void setFuelLevel(double newFuel_Level);
        void setFuelCapacity(double newFuel_Capacity);

        // Methods
        void print() const;

        void refuel(double gallons);
        void drive(double distance);


    private:
        std::string make;
        std::string model;
        int year;
        double mpg;

        double mileage;
        double fuel_capacity;
        double fuel_level;

};