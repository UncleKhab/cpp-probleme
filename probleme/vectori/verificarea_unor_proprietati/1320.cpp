#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev, current;
    bool constant = true, st_cresc = true, cresc = true, desc = true, st_desc = true;
    cin >> prev;
    for (int i = 1; i < n; i++)
    {
        cin >> current;

        if (prev < current)
        {
            desc = false;
            st_desc = false;
        }
        else if (prev > current)
        {
            cresc = false;
            st_cresc = false;
        }

        if (prev == current)
        {
            st_cresc = false;
            st_desc = false;
        }
        else
        {
            constant = false;
        }
        prev = current;
    }
    if (constant)
    {
        cout << "sir constant" << endl;
        return 0;
    }
    else if (st_cresc)
    {
        cout << "sir strict crescator" << endl;
        return 0;
    }
    else if (cresc)
    {
        cout << "sir crescator" << endl;
        return 0;
    }
    else if (st_desc)
    {
        cout << "sir strict descrescator" << endl;
        return 0;
    }
    else if (desc)
    {
        cout << "sir descrescator" << endl;
        return 0;
    }
    else
        cout << "sir neordonat" << endl;
    return 0;
}