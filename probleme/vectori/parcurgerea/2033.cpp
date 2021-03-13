// #include <fstream>

// using namespace std;

// ifstream cin("mcub.in");
// ofstream cout("mcub.out");

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n], counter = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         while (a[i] != 0)
//         {

//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[j] == 0)
//                 {
//                     break;
//                 }
//                 a[j]--;
//             }
//             counter++;
//             a[i]--;
//         }
//     }
//     cout << counter << endl;
// }

#include <fstream>

using namespace std;

ifstream cin("mcub.in");
ofstream cout("mcub.out");

long long n, h, hmax, rez;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        hmax = h;
        cin >> h;
        if (h > hmax)
            rez += h - hmax;
    }
    cout << rez;
    return 0;
}