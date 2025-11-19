#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, char *argv[])
{
    // for (int i = 0; i < argc; i++)
    // {
    //     std::cout << argv[i] << std::endl;
    // }

    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <file_name>\n";
        return 1;
    }

    std::string file_name(argv[1]);

    std::ifstream in;
    // Open the file
    in.open(file_name);

    // Check if file exists
    if (in.fail())
    {
        std::cout << file_name << " could not be opened" << std::endl;
        return 1; // Error
    }

    char ch;
    int count_chars = 0;
    int count_lines = 0;
    while (!in.eof())
    {
        ch = in.get(); // Getting one character from a file
        if (ch != ' ' && ch != '\n' && ch != EOF)
        {
            count_chars++;
        }
        if (ch == '\n')
        {
            count_lines++;
        }
    }
    std::cout << file_name << " has " << count_chars << " characters\n";
    std::cout << file_name << " has " << count_lines << " lines\n";
    
    //TODO
    // Count the number of lines in the file


    in.close();


    return 0;
}

