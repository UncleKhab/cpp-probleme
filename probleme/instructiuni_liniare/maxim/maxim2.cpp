#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m;
    ifstream fin("maxim.in");
    ofstream fout("maxim.out");
    fin >> n >> m;
    fin.close();
    if (n > m)
        fout << n << endl;
    else
        fout << m << endl;
    fout.close();
}