#include <iostream>

using namespace std;

int main()
{
    int a[101], counter = 0, n;
    cin >> n;
    while (n)
    {
        a[counter] = n % 2;
        n /= 2;
        counter++;
    }
    int putere = 1;
    for (int i = 0; i < counter; i++)
    {
        if (a[i] == 1)
            cout << putere << " ";
        putere *= 2;
    }
}

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     unsigned long long n;
//     cin >> n;
//     unsigned long long aux = n;
//     int counter = 0;
//     while (aux)
//     {
//         counter++;
//         aux /= 2;
//     }
//     aux = n;
//     int nb2[counter];
//     for (int i = counter - 1; i >= 0; i--)
//     {
//         nb2[i] = aux % 2;
//         aux /= 2;
//     }
//     for (int i = counter - 1; i >= 0; i--)
//     {

//         int x = counter - i - 1;

//         if (x == 0 && nb2[i] == 1)
//         {
//             cout << 1 << " ";
//         }
//         else if (nb2[i] == 1)
//         {
//             cout << pow(2, x) << " ";
//         }
//     }
//     cout << endl;
// }