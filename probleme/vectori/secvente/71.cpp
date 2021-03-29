#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t, n, m;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        long long v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cin >> m;
        long long u[m];

        for (int j = 0; j < m; j++)
        {
            cin >> u[j];
        }
        bool works = true;
        int j = 0;
        for (int i = 0; i < m; i++)
        {
            int cnt = 0;
            while (cnt < u[i] && j < n)
            {
                cnt += v[j];
                j++;
            }
            if (cnt > u[i] || cnt < u[i])
            {
                works = false;
            }
        }

        if (works)
            cout << 1 << endl;
        else
        {
            cout << 0 << endl;
        }
        t--;
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for(int i = 0 ; i < t ; ++i)
//     {
//         int n , m;
//         int a[1001] , b[1001];
//         cin >> n;
//         for(int j = 0 ; j < n ; ++j)
//         cin >> a[j];
//         cin >> m;
//         for(int j = 0 ; j < m ; ++j)
//         cin >> b[j];
//         int cnt=0;
//         int ok=0;
//         for(int j = 0 ; j < m ; ++j)
//         {
//             int s=0;
//             for(int k = ok ; k < n ; ++k)
//             {
//                 s+=a[k];
//                 ok++;
//                 if(s >= b[j])
//                 break;
//             }
//             if(b[j]==s)
//             cnt++;
//         }
//         if(cnt==m && ok==n)
//         cout << 1 << endl;
//         else
//         cout << 0 << endl;
//     }
// }