#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point
{
    private:
        int x;
        int y;
        char* tag;

    public:
        Point(int x = 0, int y = 0, const char* tag = nullptr);
        ~Point();
        Point(const Point& other); // Copy constructor

        // Logic operator
        bool operator==(const Point& other) const;
        bool operator!=(const Point& other) const;
        
        // Arithmetic operator
        Point operator+(const Point& other) const;
        Point operator*(const Point& other) const;

        // Arithmetic assignment operator
        Point& operator+=(const Point& other);
        Point& operator*=(const Point& other);
        Point& operator-=(const Point& other);


        // Subscript operator
        int& operator[](int index);

        // Unary operator
        Point operator-();

        // Increment
        Point operator++(); // Pre
        Point operator++(int ); // Post

        // decrement
        Point operator--(); // Pre
        Point operator--(int ); // Post

        std::string toString() const;

        
    };


#endif