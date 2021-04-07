#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("cifreord.in");
ofstream cout("cifreord.out");

int main()
{
    int n;
    cin >> n;
    int v[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    for (int i = 0; i < n; i++)
    {

        cout << v[i] << " ";
        if ((i + 1) % 20 == 0)
            cout << endl;
    }
}