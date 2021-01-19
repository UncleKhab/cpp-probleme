//impar 9 par 1
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    ifstream fin("9lan.in");
    fin >> n;
    fin.close();
    ofstream fout("9lan.out");
    if (n % 2 == 0)
        fout << 1;
    else
        fout << 9;
    fout.close();
}