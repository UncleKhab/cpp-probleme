#include <iostream>

int main()
{
    int n, nr_par;
    std::cin >> n;
    nr_par = 2;
    for (int i = 0; i < n; i++)
    {
        std::cout << nr_par << " ";
        nr_par += 2;
    }
}