#include <bits/stdc++.h>
using namespace std;

int a[100001],b[100001];
int n,m,x,s;
int cautare_binara(int x)
{
    int st = 1, dr = n;
    int mij;
    while(st <= dr)
    {
        mij = (st+dr)/2;
        if(b[mij] == x)
        {
            return mij;
        }
        if(b[mij] > x)
        {
            dr = mij - 1;
        }
        else
        {
            st = mij + 1;
        }
    }
    return dr;
}
int main()
{
    cin >> n;
    b[0] = 0;
    for(int i = 1; i <= n;i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    
    cin >> m;
    for(int i = 0; i < m;i++)
    {
        cin >> x >> s;
        int p = cautare_binara(s);
        while(a[p] > x && p>=0)
        {
            p--;
        }
       
        cout << p << '\n';
    } 
}
