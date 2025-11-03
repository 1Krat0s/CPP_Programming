#include <iostream>
#include <string>

class Human // Parent Class
{
    private:

    public:
        std::string name;
        int age;

        Human(): name("John Doe"), age(1) {}

        Human(std::string name, int age): name(name), age(age) {}

        void print() const
        {
            std::cout << "Hi! My name is " << name << '\n';
            std::cout << "I am " << age << '\n';
        }

};

class Student : public Human // Student class is a child of Human class
{
    private:

    public:
        int student_id;

        Student(std::string name = "John Doe", int age = 1, int student_id = 0): 
            Human(name, age), student_id(student_id) {}
        
    void print() const
        {
            Human::print(); // Calling the method of parent class
            std::cout << "My student ID is " << student_id << std::endl;
        }   
};


int main()
{
    Human h("Slim Shady", 53);
    h.print();

    Student st("Michael Jordan", 57, 23);
    st.print();

    return 0;
}