#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    private:
        int x;
        int y;

    public:
        Point(int x, int y);

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



        int& operator[](int index);


        
    };


#endif