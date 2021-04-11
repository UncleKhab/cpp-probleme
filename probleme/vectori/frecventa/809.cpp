#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("nrlipsa1.in");
ofstream cout("nrlipsa1.out");
int v[100];
int main()
{
    int n;
    while (cin >> n)
    {
        if (n > 9 && n < 100)
        {
            v[n]++;
        }
    }
    int min;
    bool gasit = false;
    for (int i = 10; i < 98 && !gasit; i += 2)
    {
        if (v[i] == 0)
        {
            min = i;
            gasit = true;
        }
    }
    int max = 0;
    if (gasit)
    {
        gasit = false;
        for (int i = 98; i > min && !gasit; i -= 2)
        {
            if (v[i] == 0)
            {
                max = i;
                gasit = true;
            }
        }
    }
    if (gasit)
    {
        cout << min << " " << max << endl;
    }
    else
    {
        cout << "nu exista" << endl;
    }
}