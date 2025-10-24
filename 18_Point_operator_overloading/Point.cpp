#include "Point.hpp"



Point::Point(int x, int)
{
    this->x = x;
    this->y = y;
}

// logic operator
bool Point::operator==(const Point& other) const
{
    return (x == other.x && y == other.y);
}
bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
}

// Arithmetic
Point Point::operator+(const Point& other) const
{
    return Point(x + other.x, y + other.y);
}
Point Point::operator*(const Point& other) const
{
    return Point(x * other.x, y * other.y);
}


// Arithmetic
Point& Point::operator+=(const Point& other)
{
    this->x += other.x;
    this->y += other.y;
    return *this;
}
Point& Point::operator*=(const Point& other)
{
    this->x *= other.x;
    this->y *= other.y;
    return *this;
}
Point& Point::operator-=(const Point& other)
{
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

int& Point::operator[](int index)
{
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else
        return x;
}

