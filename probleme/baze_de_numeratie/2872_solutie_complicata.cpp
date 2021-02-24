#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pown = 1;
    int counter = 0;
    int rez = 0;

    for (int i = 0; i < n; i++)
    {
        pown *= 2;
    }

    int aux = pown;

    while (aux)
    {
        counter++;
        aux /= 2;
    }

    int numbers[counter + 1];
    int i = 0;

    while (pown)
    {
        numbers[i] = pown % 2;
        pown /= 2;
        i++;
    }

    for (int j = counter - 1; j >= 0; j--)
    {
        cout << numbers[j];
    }
    cout << endl;
}