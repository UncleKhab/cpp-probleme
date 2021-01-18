#include <iostream>
#include <string>

int main()
{
    std::string greeting = "hello";
    std::cout << greeting[0] << std::endl;

    // you can concatenate using + operator
    std::cout << greeting + " yellow" << std::endl;

    // you can append to a string
    greeting += " !";
    std::cout << greeting << std::endl;

    //The string class has more members
    std::cout << greeting.length() << std::endl;
    // method == member function
    // methods are functions are attached to members

    char name[] = "Caleb"; //c string == array of characters
    // the number of bits it uses stays constant, you can't reassign without using a method
}