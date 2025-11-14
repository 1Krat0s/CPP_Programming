#include <iostream>

class Fraction
{
    private:
        int num;
        int denom;

    public:
        Fraction(int n = 0, int d = 1) : num(n), denom(d)
        {

        }

        int quotient()
        {
            if (denom == 0)
            {
                throw "Cannot divide by zero";
            }
            if (num < -100)
            {
                std::string ex("Error: the numerator is too small");
                throw ex;
            }
            // TODO throw an int exception with code 777 if the result is less than 0
            if ((num / denom) < 0)
            {
                throw 777;
            }

            return num / denom;
        }
};

int main()
{
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;

    Fraction f1(n1, n2);

    try
    {
        std::cout << f1.quotient() << std::endl;
    }
    catch (const char* str)
    {
        std::cout << str << std::endl;
    }
    catch (const std::string& str)
    {
        std::cout << str << std::endl;
    }
    catch (int ex)
    {
        std::cout << "Exception code is " << ex << ". The result is less than 0." << std::endl;
    }
    catch (...)
    {
        std::cout << "Other type of exception" << std::endl;
    }
    
    std::cout << "Excecution of the program continues" << std::endl;

    return 0;
}