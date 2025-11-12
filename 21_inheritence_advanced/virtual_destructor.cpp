#include <iostream>

class Dad
{
    private:

    public:
        Dad()
        {
            std::cout << "Dad's Constructor\n";
        }
        
        virtual ~Dad()
        {
            std::cout << "Dad's Destructor\n";
        }
};
    
class Son : public Dad
{
    private:
        
    public:
        Son()
        {
            std::cout << "Son's Constructor\n";
            std::cout << "Dynamic memory was allocated\n";
        }
        
        ~Son() 
        {
            std::cout << "Dynamic memory was deallocated\n";
        }
};


int main()
{
    Dad* dad = new Son();

    delete dad;

    return 0;
}