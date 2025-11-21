#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
    std::ofstream file_out;

    if (argc != 2)
    {
        std::cerr << "Error: incorrect ussage!\n";
        return 1;
    }
    
    char *file_name = argv[1];
    
    file_out.open(file_name, std::ios::binary);
    
    // Check file opening
    if (!file_out)
    {
        std::cerr << "Error: could not open the file!\n";
        return 1;
    }

    int v = 1000;

    // Write into a binary file
    file_out.write(reinterpret_cast<char*>(&v), sizeof(v));

    // Close the file
    file_out.close();

    // Read from a file
    std::ifstream file_in(file_name, std::ios::binary);

    if (!file_in)
    {
        std::cerr << "Error: could not open the file!\n";
        return 1;
    }

    int v2;
    file_in.read(reinterpret_cast<char*>(&v2), sizeof(v2));

    file_in.close();

    std::cout << v2 << std::endl;

    return 0;
}