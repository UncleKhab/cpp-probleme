#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter_one = 0, counter_two = 0;
    int x[n], y[n];
    for (int i = n; i > 0; i--)
    {
        if (i == n)
        {
            x[counter_one] = i;
            counter_one++;
        }
        else if (counter_one % 2 != 0 && counter_one >= counter_two)
        {
            y[counter_two] = i;
            counter_two++;
        }
        else
        {
            x[counter_one] = i;
            counter_one++;
        }
    }
    for (int i = 0; i < counter_one; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < counter_two; i++)
    {
        cout << y[i] << " ";
    }
    cout << endl;
}