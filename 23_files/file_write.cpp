#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
    std::ofstream out;

    std::cout << "Enter a file name: ";
    std::string file_name;
    std::cin >> file_name;

    // Open the file
    out.open(file_name);

    // Writing into a file
    out << "Hello" << std::endl;
    out << "MDRM8" << std::endl;

    for (int i = 1; i <= 100; i++)
    {
        out << std::setw(5) << i;
        if (i % 10 == 0)
        {
            out << '\n';
        }
    }

    // Close the file
    out.close();

    return 0;
}