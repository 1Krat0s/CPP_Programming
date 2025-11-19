#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
    std::ifstream in;

    std::cout << "Enter a file name: ";
    std::string file_name;
    std::cin >> file_name;

    // Open the file
    in.open(file_name);

    // Check if file exists
    if (in.fail())
    {
        std::cout << file_name << " could not be opened" << std::endl;
        return 1; // Error
    }


    // Reading from a file
    std::string first_line;
    std::string second_line;

    getline(in, first_line);
    getline(in, second_line);

    int sum = 0;
    int num;
    while (in >> num)
    {
        std::cout << num << ' ';
        sum += num;
    }
    
    std::cout << '\n' << first_line << "\nA+ code: " << second_line << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    // for (int i = 1; i <= 100; i++)
    // {
    //     out << std::setw(5) << i;
    //     if (i % 10 == 0)
    //     {
    //         out << '\n';
    //     }
    // }

    // Close the file
    in.close();

    return 0;
}