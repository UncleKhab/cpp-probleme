#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    long long n, s, m1, m2, t;
    ifstream fin("rapunzel.in");
    fin >> n >> m1 >> m2;
    fin.close();
    t = m1 + m2;
    if (t > n)
    {
        s = 1;
    }
    else if (n % t == 0)
    {
        s = n / t;
    }
    else
    {
        s = n / t + 1;
    }
    ofstream fout("rapunzel.out");
    fout << s << endl;
    fout.close();
}