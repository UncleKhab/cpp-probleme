#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("n_suma.in");
ofstream fout("n_suma.out");
int main()
{
    int n, m, sum = 0;
    fin >> n;
    while (n > 0)
    {
        fin >> m;
        sum += m;
        n--;
    }
    fout << sum << "\n";
}