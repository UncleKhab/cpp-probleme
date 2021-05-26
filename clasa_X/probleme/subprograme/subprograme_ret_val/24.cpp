#include <bits/stdc++.h>

using namespace std;
long long oglindit(int n);
int main()
{
    cout << oglindit(123456);
}

long long oglindit(int n)
{
    int r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}