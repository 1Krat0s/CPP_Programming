#include "MyVector.hpp"

int main()
{
    // Create a MyVector object dynamically
    MyVector* mvPtr = new MyVector(10);

    mvPtr -> push_back(1);
    mvPtr -> push_back(2);
    mvPtr -> push_back(3);
    mvPtr -> push_back(4);
    mvPtr -> push_back(1);
    mvPtr -> push_back(2);
    mvPtr -> push_back(3);
    mvPtr -> push_back(4);
    mvPtr -> push_back(1);
    mvPtr -> push_back(2);
    mvPtr -> push_back(3);
    mvPtr -> push_back(4);

    mvPtr -> pop_back();

    mvPtr -> print();


    delete mvPtr;
    return 0;
}