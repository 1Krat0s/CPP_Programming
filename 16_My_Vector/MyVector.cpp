#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity) : size(0)
{
    this -> capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector()
{
    delete [] elements;
}

MyVector::MyVector(const MyVector& other)
{
    this->size = other.size;
    this->capacity = other.capacity;
    this->elements = new int[this->capacity];
    for (int i = 0; i < this->size; i++)
    {
        this->elements[i] = other.elements[i];
    }
}

void MyVector::push_back(int value)
{
    if (size == capacity)
    {
        int new_capacity = (capacity == 0) ? 1 : capacity * 2;

        int* new_elements = new int[new_capacity];

        for (int i = 0; i < size; i++)
        {
            new_elements[i] = elements[i];
        }

        delete [] elements;

        elements = new_elements;
        capacity = new_capacity;
    }
    elements[size] = value;
    size++;
}

void MyVector::print() const
{
    std::cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]\n";
}

void MyVector::pop_back()
{
    if (size == 0)
    {
        return;
    }
    
    size--;

    if (capacity > 0 && size > 0 && capacity > 2 * size)
    {
        int new_capacity = capacity / 2;

        if (new_capacity < size)
        {
            new_capacity = size;
        }

        int* new_elements = new int[new_capacity];

        for (int i = 0; i < size; i++)
        {
            new_elements[i] = elements[i];
        }

        delete [] elements;

        elements = new_elements;
        capacity = new_capacity;
    }
}