#include <iostream>
#include <fstream>

std::ifstream fin("hidden_number.in");
std::ofstream fout("hidden_number.out");

int main()
{
    int n, sum = 0, cnt = 0;
    while (fin >> n)
    {
        sum += n;
        cnt++;
    }
    int m = sum / cnt;
    if (m * cnt == sum)
    {
        fout << m << "\n";
    }
    else
    {
        fout << -1 << "\n";
    }
}