#include <fstream>

using namespace std;
ifstream fin("relativ.in");
ofstream fout("relativ.out");

int main()
{
    int n;
    fin >> n;
    long long int x;
    fin >> x;
    int min_relative = 0;
    long long int sum1 = 0, sum2 = 0;
    long long int min = x;
    sum1 = min;
    for (int i = 0; i < n; i++)
    {

        sum1 += x;
        if (x <= min)
        {
            min = x;
            min_relative++;
            if (sum1 > sum2)
            {
                sum2 = sum1;
            }
            sum1 = min;
        }
        fin >> x;
    }
    fout << min_relative << "\n"
         << sum2;
}