#include <iostream>

int main()
{
    int n, k, nr_zerouri = 0;
    std::cin >> n >> k;
    while (n > 1)
    {
        nr_zerouri++;
        n /= 10;
    }

    std::cout << n;

    while (k > 0)
    {
        for (int i = 0; i < nr_zerouri; i++)
        {
            std::cout << 0;
        }
        k--;
    }
    std::cout << "\n";
}