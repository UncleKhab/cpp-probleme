#include <fstream>

using namespace std;
ifstream cin("conversie_b_10.in");
ofstream cout("conversie_b_10.out");
int main()
{
    int b, n;
    cin >> n >> b;
    int rez = 0;
    int reverse = 0;
    int zero_counter = 0;
    while (n)
    {
        if (reverse == 0 && n % 10 == 0)
        {
            zero_counter++;
        }
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    n = reverse;
    reverse = 0;
    while (n)
    {
        reverse = reverse * b + n % 10;
        n /= 10;
    }
    for (int i = 0; i < zero_counter; i++)
    {
        reverse *= b;
    }
    cout << reverse << endl;
}
