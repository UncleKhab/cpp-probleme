#include <fstream>

using namespace std;

ifstream fin("pozitiiconsecutive.in");
ofstream fout("pozitiiconsecutive.out");
int get_last(int a, int b)
{
    if (a == 0)
    {
        fout << 0 << " ";
        return 0;
    }
    if (a == 3)
    {
        return 3;
    }
    else
    {
        int c = (b * 2) - a + 2;
        fout << c << " ";
        return get_last(b, c);
    }
}
int main()
{
    int a, b;
    fin >> a >> b;
    fout << b << " " << a << " ";
    get_last(b, a);
}