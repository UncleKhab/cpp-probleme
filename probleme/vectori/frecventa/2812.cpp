#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("progresie3.in");
ofstream cout("progresie3.out");
int v[1001];
int main()
{
    int n;
    while (cin >> n)
    {
        v[n]++;
    }
    bool works = true;
    int diff = -1;
    int prev = -1;
    for (int i = 0; i < 1001 && works; i++)
    {
        if (v[i] > 0)
        {
            if (prev == -1)
            {
                prev = i;
            }
            else if (diff == -1)
            {
                diff = i - prev;
                prev = i;
            }
            else
            {
                if (i - prev != diff)
                {
                    works = false;
                }
                else
                {
                    prev = i;
                }
            }
        }
    }
    if (works)
    {
        cout << diff << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}