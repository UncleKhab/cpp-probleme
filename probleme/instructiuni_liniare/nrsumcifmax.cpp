#include <iostream>

using namespace std;

int main()
{
    int x, y, z, sx, sy, sz;
    cin >> x >> y >> z;
    sx = (x / 10) + (x % 10);
    sy = (y / 10) + (y % 10);
    sz = (z / 10) + (z % 10);

    if (sx >= sy && sx >= sz)
        cout << x;

    if (sy >= sx && sy >= sz)
        cout << " " << y;

    if (sz >= sx && sz >= sy)
        cout << " " << z;

    cout << "\n";
}