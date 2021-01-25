#include <fstream>

using namespace std;

ifstream fin("numere18.in");
ofstream fout("numere18.out");

int main()
{
    int C, n;
    fin >> C >> n;
    if (C == 1)
    {
        int t1 = (n - 1) * n / 2 + 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += t1;
            t1++;
        }
        fout << sum << endl;
    }
    if (C == 2)
    {
        int t1 = 1;
        while (t1 * (t1 + 1) / 2 < n)
        {
            t1++;
        }
        t1--;
        fout << t1 + 1 << " " << n - t1 * (t1 + 1) / 2 << endl;
    }
}