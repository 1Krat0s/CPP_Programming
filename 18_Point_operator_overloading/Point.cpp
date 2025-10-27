#include "Point.hpp"
#include <cstring>


Point::Point(int x, int y, const char* tag)
{
    this->x = x;
    this->y = y;
    if (tag)
    {
        int size = strlen(tag);
        this->tag = new char[size + 1];
        strcpy(this->tag, tag);
    }
    else
    {
        this->tag = nullptr;
    }
}

Point::~Point()
{
    if (tag)
    {
        delete [] tag;
    }
}

Point::Point(const Point& other)
{
    x = other.x;
    y = other.y;
    if (other.tag)
    {
        int size = strlen(other.tag);
        this->tag = new char[size + 1];
        strcpy(this->tag, other.tag);
    }
    else
    {
        tag = nullptr;
    }
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
    *this = *this + other;
    return *this;
}
Point& Point::operator*=(const Point& other)
{
    *this = *this * other;
    return *this;
}
Point& Point::operator-=(const Point& other)
{
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

// Subscript operator
int& Point::operator[](int index)
{
    return (index == 0) ? x : y;
}

// Unary operator
Point Point::operator-()
{
    return Point(-x, -y);
}
// Pre Increment
Point Point::operator++()
{
    x += 1;
    y += 1;
    return *this;
}
// Post Increment
Point Point::operator++(int)
{
    Point temp(*this);

    this->x += 1;
    this->y += 1;
    return temp;
}

// Pre decrement
Point Point::operator--()
{
    x -= 1;
    y -= 1;
    return *this;
}
// Post decrement
Point Point::operator--(int)
{
    Point temp(*this);

    this->x -= 1;
    this->y -= 1;
    return temp;
}


std::string Point::toString() const
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}