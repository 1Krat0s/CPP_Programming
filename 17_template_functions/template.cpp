#include <iostream>
#include <vector>

// A template function
template <typename T>
T largest(const T& n1, const T& n2, const T& n3);

// Find the maximum in a vector (template function)
template <typename T>
T findMax(const std::vector<T>& v);

// Template class
template <typename T1, typename T2>
class Pair
{
    private:
        T1 first;
        T2 second;

    public:
        Pair(const T1& f, const T2& s) : first(f), second(s) {}

        // Getters
        T1 getFirst() const
        {
            return first;
        }
        T2 getSecond() const
        {
            return second;
        }

        // Setters
        void setFirst(const T1& first)
        {
            this -> first = first;
        }
        void setSecond(const T2& second)
        {
            this -> second = second;
        }

};

// Create a template function that takes 2 arguments of any type and returns a pair of those arguments 
template <typename P1, typename P2>
Pair<P1, P2> turnToPair(const P1& p1, const P2& p2);


int main()
{
    int n1 = 1, n2 = 2, n3 = 3;
    std::cout << largest(n1, n2, n3) << std::endl;
    int d1 = 11.6, d2 = 20.5, d3 = 1.5;
    std::cout << largest(d1, d2, d3) << std::endl;
    
    char c1 = 'A', c2 = 'Y', c3 = 'b';
    std::cout << largest(c1, c2, c3) << std::endl;
    
    std::vector<std::string> v = {"Hello", "Bye", "Good Morning"};
    std::cout << findMax(v) << std::endl;
    
    // Create an object of Pair class 
    Pair<int, std::string> p (1, "Jelly");
    std::cout << p.getFirst() << " " << p.getSecond() << std::endl;
    
    
    std::cout << turnToPair(100, 8.4).getFirst() << " " << turnToPair(100, 8.4).getSecond() << std::endl;
    
    return 0;
}

template <typename T>
T largest(const T& n1, const T& n2, const T& n3)
{
    if (n1 >= n2 && n1 >= n3)
    {
        return n1;
    }
    if (n2 >= n1 && n2 >= n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}

template <typename T>
T findMax(const std::vector<T>& v)
{   
    if (v.empty())
    {   
        // Throw an exception
        throw "Empty vector!";
    }
    T max = v[0];
    for (const T& el : v)
    {
        if (el > max)
        {
            max = el;
        }
    }
    
    return max;
}

template <typename P1, typename P2>
Pair<P1, P2> turnToPair(const P1& p1, const P2& p2)
{
    return Pair(p1, p2);
}