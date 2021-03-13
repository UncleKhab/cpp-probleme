#include <iostream>

using namespace std;

bool nr_cif(int n)
{
    int counter = 0;

    while (n)
    {
        counter++;
        n /= 10;
    }
    if (counter % 2 == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    bool pare = true;
    for (int i = 0; i < n && pare; i++)
    {
        int tmp;
        cin >> tmp;
        pare = nr_cif(tmp);
    }
    if (pare)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}