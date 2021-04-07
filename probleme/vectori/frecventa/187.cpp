#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("ciffrecv.in");
ofstream cout("ciffrecv.out");
int u[10];
int main()
{
    for (int i = 0; i < 10; i++)
    {
        u[i] = 0;
    }
    int n;
    while (cin >> n)
    {
        if (n == 2 || n == 3 || n == 5 || n == 7)
        {
            u[n]++;
        }
    }
    int max = 1;
    int indx = 0;
    for (int i = 2; i < 8; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            if (u[i] > 0)
            {
                indx = i;
                max = u[i];
            }
        }
    }
    cout << indx << " " << max << endl;
}