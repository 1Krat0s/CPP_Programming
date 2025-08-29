#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    // n n-1 n-2 .... 1 2 3 .... n

    for (int j = 0; j < n; j++)
    {
        for (int i = n; i > 0; i--)
        {
            std::cout << i << ' ';
        }
        
        for (int i = 2; i <= n; i++)
        {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }




    return 0;
}