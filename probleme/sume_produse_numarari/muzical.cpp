#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("muzical.in");
ofstream fout("muzical.out");

int main()
{

    int n, sum = 0;
    char nota[4];
    char s[9][4] = {"do1", "re", "mi", "fa", "sol", "la", "si", "do2"};

    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> nota;
        for (int i = 0; i < 8; i++)
        {
            if (!strcmp(s[i], nota))
            {
                sum += i;
                break;
            }
        }
    }
    sum = sum % 8;
    fout << s[sum];
}