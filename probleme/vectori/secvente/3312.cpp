#include <fstream>
#include <algorithm>
#include <bitset>

using namespace std;
ifstream cin("eratostene1.in");
ofstream cout("eratostene1.out");
bitset<500001> p;

int main()
{

    p[0] = 1;
    // pentru nr de la 3, mergem din 2 in 2
    for (int i = 3; i <= 999999; i += 2)
        // daca nr / 2 este prim
        if (p[i / 2] == 0)
            for (int j = 3 * i; j <= 999999; j += 2 * i)
                p[j / 2] = 1;

    int n, k = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (x % 2 == 0 && x == 2)
            k++;
        else if (x % 2 == 1 && p[x / 2] == 0)
            k++;
    }
    cout << k;
    return 0;
}