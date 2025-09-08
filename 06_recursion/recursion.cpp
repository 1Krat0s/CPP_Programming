#include <iostream>

void test(int n);

int main()
{
    test(100);
    return 0;
}

// Recursive function
void test(int n)
{   
    // The base case
    if (n <= 0)
    {
        return;
    }

    // The recursive case
    std::cout << n << std::endl;
    test(n-1);
}