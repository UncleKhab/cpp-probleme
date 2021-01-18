#include <iostream>

using namespace std;

int main()
{
    bool pizza_is_good = true;
    // There is a conversion between bool and numbers
    // 0 is false and anything else is considered true

    // You can use bools as a flag, something that indicates if something happened
    //search algorithm -> if found, found = true;
    cout << pizza_is_good << endl;
    // to output true or false you can use a manipulator
    cout << std::boolalpha << pizza_is_good << std::endl;
}