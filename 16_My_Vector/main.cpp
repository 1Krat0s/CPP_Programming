#include "MyVector.hpp"
#include <vector>
#include <iostream>
#include <random>

int main()
{
    std::vector<int> n;
    n.push_back(10);
    n.at(0) = 100;
    std::cout << n.at(0) << std::endl;

    // std::cout << n.pop_back() << std::endl;

    // Create a MyVector object dynamically
    MyVector* mvPtr = new MyVector(10);

    for (int i = 0; i < 2; i++)
    {
        mvPtr->push_back(rand()%100);
        std::cout << mvPtr->getCapacity() << std::endl;
    }
    mvPtr -> print();

    /*
    for (int i = 0; i < 2; i++)
    {
        mvPtr->pop_back();
        std::cout << mvPtr->getCapacity() << std::endl;
    }
    */

    //mvPtr -> print();
    
    mvPtr -> at(0) = 100;
    mvPtr -> print();
    std::cout << "Using at " << mvPtr -> at(0) << std::endl;
    
    delete mvPtr;
    return 0;
}