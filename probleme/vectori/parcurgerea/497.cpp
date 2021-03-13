// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int v[n], elem, comp = n / 2;
//     bool gasit = false;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         int a = v[i];
//         int counter = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v[j] == a)
//             {
//                 counter++;
//                 v[j] = v[j + 1];
//                 n--;
//                 j--;
//             }
//         }

//         if (counter > comp)
//         {
//             elem = a;
//             gasit = true;
//         }
//         if (gasit)
//         {
//             break;
//         }
//     }
//     if (gasit)
//     {
//         cout << "DA " << elem << endl;
//     }
//     else
//     {
//         cout << "NU" << endl;
//     }
// }

#include <iostream>

using namespace std;

int n, x[100005];

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> x[i];
    int candidat = x[0], contor = 1;
    for (int i = 1; i < n; ++i)
    {
        if (x[i] == candidat)
            contor++;
        else
            contor--;
        if (contor == 0)
            candidat = x[i], contor = 1;
    }
    contor = 0;
    for (int i = 0; i < n; ++i)
        if (x[i] == candidat)
            contor++;
    if (contor > n / 2)
        cout << "DA " << candidat;
    else
        cout << "NU";
    return 0;
}