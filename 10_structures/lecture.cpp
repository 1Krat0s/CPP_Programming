#include <iostream>
#include <string>
#include <iomanip>

// Prototype
void printLecture(const struct Lecture& lecture);
struct Lecture createLecture(std::string title, std::string author, int duration);

// Create a structure
struct Lecture 
{
    std::string title;
    int duration;
    std::string author;
};


int main()
{
    struct Lecture oop_the_best = createLecture("Structures", "Igor", 50);
    // Call a function
    printLecture(oop_the_best);
    
    return 0;
}


void printLecture(const struct Lecture& lecture)
{
    std::cout << std::setw(15) << std::left << "Title: " << lecture.title << std::endl;
    std::cout << std::setw(15) << std::left << "Author: " << lecture.author << std::endl;
    std::cout << std::setw(15) << std::left << "Duration: " << lecture.duration / 60 << " minutes" << std::endl;   
}

struct Lecture createLecture(std::string title, std::string author, int duration)
{
    // Create a Lecture object
    struct Lecture oop_the_best;
    
    // Modify the properties of an object
    oop_the_best.title = title;
    oop_the_best.author = author;
    oop_the_best.duration = duration * 60;

    return oop_the_best;
}