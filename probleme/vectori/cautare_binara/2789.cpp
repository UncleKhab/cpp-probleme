#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("cb3.in");
ofstream cout("cb3.out");


int a[10001];
long long int b[10001];
int n,m;

int cautare_binara(long long x)
{
    int st = 1, dr = n;
    int mij;
    while(st <= dr)
    {
        mij = (st + dr) / 2;
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
    
    b[0] = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for(int i = 1; i <= n;i++)
    {
        b[i] = b[i-1] + a[i];
    }
    
    for(int i = 0; i < m; i++)
    {
        long long tmp;
        cin >> tmp;
        cout << cautare_binara(tmp) << '\n';
    }
}