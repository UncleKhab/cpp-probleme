#include <iostream>

using namespace std;

int main()
{
    int n,m,n1,n2,m1,m2;
    cin>>n>>m;
    n1 = n % 10;
    n2 = n / 10;
    m1 = m % 10;
    m2 = m / 10;
    if(n1 == m1 || n1 == m2 || n2 == m2 || n2 == m1)
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}