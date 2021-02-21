#include <fstream>

using namespace std;
ifstream fin("fibo0.in");
ofstream fout("fibo0.out");

int main()
{
    long int a, b;
    int count = 0;
    while (fin >> a >> b)
    {
        if (b % a == 0)
            count++;
    }
    fout << count << endl;
}