#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("eratostene.in");
ofstream cout("eratostene.out");

bool a[1000005];
long int MAX = 1000000;
void populate_eratostene()
{
    a[1] = 1;
    a[0] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; j <= MAX / i; j++)
            {
                a[i * j] = 1;
            }
        }
    }
}
int main()
{
    populate_eratostene();
    int x, n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (a[x] == 0)
            sum++;
    }
    cout << sum << endl;
}

// #include <fstream>
// #include <algorithm>

// using namespace std;

// ifstream cin("eratostene.in");
// ofstream cout("eratostene.out");

// bool a[1000005];

// int main()
// {
//     a[0] = a[1] = 1;
//     for (int i = 2; i <= 1000; i++)
//         if (a[i] == 0)
//             for (int j = 2; i * j <= 1000000; j++)
//                 a[i * j] = 1;

//     int n;
//     cin >> n;
//     int x;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         if (a[x] == 0)
//             sum++;
//     }
//     cout << sum << endl;
// }