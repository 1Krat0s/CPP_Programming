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
        allocate_memory(capacity * 2);
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

int MyVector::pop_back()
{
    if (size > 0)
    {
        if (size-1 < capacity/2)
        {
            allocate_memory(capacity/2);
        }
        return elements[--size];
    }
    else
    {
        // Throw an exception
        throw "The vector is empty!";
    }
}


void MyVector::allocate_memory(int memory_size)
{
    capacity = memory_size;
    int *old = elements;

    // Allocate new memory
    elements = new int[memory_size];
    for (int i = 0; i < size; i++)
    {
        elements[i] = old[i];
    }
    // Deallocate old memory
    delete [] old;
}

int MyVector::getCapacity() const
{
    return capacity;
}

int& MyVector::at(int index)
{
    if (index < 0 || index > size -1)
    {
        throw "Invalid index";
    }
    return elements[index];
}