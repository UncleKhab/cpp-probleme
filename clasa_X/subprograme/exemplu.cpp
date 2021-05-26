#include <iostream>
using namespace std;

int x;

void F()
{
    cout << x << endl; //5, variabila globala 3
    int x = 10;
    cout << x << endl; //10, variabila locala in F() 4
    {
        int x = 20;
        cout << x << endl; //20, variabila locala în F(), blocul interior 5
    }
    cout << x << endl; //10, variabila locala in F() 6
}

int y;

int main()
{
    cout << x << endl; //0, variabila globală 1
    x = 5;
    cout << x << endl; //5, variabila globala 2
    F();
    cout << x << endl; //5, variabila globala 7
    int x = 100;
    cout << x << endl; //100, variabila locala in main() 8
    return 0;
}