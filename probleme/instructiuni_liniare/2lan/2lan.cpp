#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("2lan.in");
    ofstream fout("2lan.out");
    int n;
    fin >> n;
    fin.close();
    if (n == 0)
    {
        fout << 1;
    }
    else
    {
        n = n % 4;
        switch (n)
        {
        case 0:
            fout << 6;
            break;
        case 1:
            fout << 2;
            break;
        case 2:
            fout << 4;
            break;
        case 3:
            fout << 8;
            break;
        default:
            break;
        }
    }

    fout.close();
}