#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector
{
    private:
        int *elements;
        int size;
        int capacity;

        void allocate_memory(int memory_size);

    public:
        MyVector(int capacity = 1);
        ~MyVector();
        MyVector(const MyVector& other);

        void push_back(int value);
        void print() const;

        int pop_back();
        int getCapacity() const;

        int& at(int index);

};


#endif