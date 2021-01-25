#include <fstream>

using namespace std;

ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

int main()
{
    int n, m, max = -1000, count = 0;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> m;
        if (m == max)
        {
            count++;
        }
        if (m > max && m % 2 == 0)
        {
            max = m;
            count = 1;
        }
    }
    if (count > 0)
    {
        fout << max << " " << count << endl;
    }
    else
    {
        fout << -1 << endl;
    }
}