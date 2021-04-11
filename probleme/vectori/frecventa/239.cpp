#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("nrlipsa.in");
ofstream cout("nrlipsa.out");
int x[1001];
int main()
{
    int tmp;
    while (cin >> tmp)
    {
        if (tmp > 99 && tmp < 1000)
        {
            x[tmp]++;
        }
    }
    int nr_gasit = 0;
    int nr1 = 0, nr2 = 0;
    for (int i = 999; i > 99 && nr_gasit != 2; i--)
    {
        if (x[i] == 0)
        {
            if (nr1 == 0)
            {
                nr1 = i;
            }
            else if (nr2 == 0)
            {
                nr2 = i;
            }
            nr_gasit++;
        }
    }
    if (nr_gasit != 2)
    {
        cout << "NU" << endl;
    }
    else
    {
        cout << nr1 << " " << nr2 << endl;
    }
}