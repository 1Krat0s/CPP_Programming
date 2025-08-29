#include <iostream>

int main()
{
    int age = 25;
    double gpa = 3.5;
    char grade = 'A';
    std::string name = "Mike"; // string (Requires <string> header)
    bool isActive = true;

    // Scan the input
    std::cout << "Enter your name: ";
    getline(std::cin, name); // use to get a string as an input

    std::cout << "Enter your age and GPA: ";
    std::cin >> age >> gpa;

    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << gpa << std::endl;
    std::cout << grade << std::endl;


    return 0;
}