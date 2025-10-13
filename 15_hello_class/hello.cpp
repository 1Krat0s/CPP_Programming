#include <iostream>

class Hello
{
    private:

    public:
        Hello()
        {
            std::cout << "Constructor" << std::endl;
        }

        Hello(int n)
        {
            std::cout << "Constructor with arguments" << std::endl;
        }

        void bye()
        {
            std::cout << "Bye!" << std::endl;
        }
};

int main()
{   
    // Create an object dynamically
    Hello *hi = new Hello;
    
    // Create an object dynamically
    Hello *hi2 = new Hello(10);

    // Access bye method
    hi -> bye();
    
    // Deallocate the memory
    delete hi;
    delete hi2;
    


    return 0;
}