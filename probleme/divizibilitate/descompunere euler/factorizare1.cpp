#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long d = 2;
    int max_cnt = 0, nr = 0;
    while (n > 1)
    {
        if (n % d == 0)
        {
            int cnt = 0;
            while (n % d == 0)
            {
                cnt++;
                n /= d;
            }
            if (cnt > max_cnt)
            {
                max_cnt = cnt;
                nr = d;
            }
            if (cnt == max_cnt && d > nr)
            {
                nr = d;
            }
        }
        d++;
        if (d * d > n)
        {
            d = n;
        }
    }
    cout << nr << endl;
}