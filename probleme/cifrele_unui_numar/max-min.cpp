#include <iostream>

using namespace std;

int main()
{
    int n, m, min_sum = 100, max_sum = -100, min_num, max_num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        m = abs(m);
        int current_sum = 0;
        int aux = m;
        while (aux > 0)
        {
            current_sum += aux % 10;
            aux /= 10;
        }
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            max_num = m;
        }
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            min_num = m;
        }
    }
    cout << min_num << "\n"
         << max_num << endl;
}