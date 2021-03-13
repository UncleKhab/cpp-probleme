#include <fstream>

using namespace std;

ifstream fin("numere2.in");
ofstream fout("numere2.out");

int main()
{
    int n;
    fin >> n;
    int v[n], counter = 0;
    for (int i = 0; i < n; i++)
    {
        fin >> v[i];
        if (v[i - 1] == v[i])
        {
            i -= 2;
            n -= 2;
            counter++;
        }
    }

    fout << counter << endl;
    for (int i = 0; i < n; i++)
    {
        fout << v[i] << " ";
    }
}
