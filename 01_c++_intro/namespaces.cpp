#include <iostream>

// Create the namespace
namespace first
{
    int a = 5;

    void print()
    {
        std::cout << "First" << std::endl;
    }
}

namespace second
{
    int a = 5;

    void print()
    {
        std::cout << "Second" << std::endl;
    }
}

int main(void)
{
    first::print();
    second::print();

    

    return 0;
}