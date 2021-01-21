#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Hello";
    greeting += " there";        // You can append this way
    greeting.append(" Stefan!"); // or this way
    // find out the length of the string
    greeting.length();
    // Inserting

    greeting.insert(3, "      ");
    //first arg is the Index, second is the insert

    //Erasing
    greeting.erase(3, 1);
    //first arg is the index, second arg is how many
    // second arg is optional, if not present it will remove everything after index

    //erase last character
    greeting.pop_back();

    //replace to change
    greeting.replace(0, 4, "heaven");
    //first arg is index, second is the length, third is what to replace with;

    std::cout << greeting << std::endl;
}