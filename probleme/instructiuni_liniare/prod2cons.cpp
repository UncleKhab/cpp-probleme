#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int x, y;
    cin>>x;
    if(x%2 != 0)
        cout<<"NU EXISTA";
    else
        y = (int)sqrt(x);
        if(x == y*(y+1))
            cout<<y<<" "<<y+1<<endl;
        else
            cout<<"NU EXISTA";
    return 0;
}