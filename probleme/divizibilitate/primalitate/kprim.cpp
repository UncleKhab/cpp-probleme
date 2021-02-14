#include <fstream>
using namespace std;
ifstream fin("kprim.in");
ofstream fout("kprim.out");
int prim(int n)
{
    if (n == 0 || n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    fin >> n;
    long long int d = 2;
    while (n)
    {
        if (prim(d))
        {
            n--;
        }
        d++;
    }
    while (!prim(d))
    {
        d++;
    }
    cout << d * d << endl;
}