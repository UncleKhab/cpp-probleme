#include <fstream>

using namespace std;
ifstream fin("nr_pal.in");
ofstream fout("nr_pal.out");

int main()
{
    int n;
    fin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        fin >> x >> y;
        for (int j = x; j < y; j++)
        {
            int aux = j;
            int reverse = 0;
            while (aux)
            {
                reverse = reverse * 10 + aux % 10;
                aux /= 10;
            }
            if (reverse == j)
                counter++;
        }
        fout << counter << "\n";
    }
}