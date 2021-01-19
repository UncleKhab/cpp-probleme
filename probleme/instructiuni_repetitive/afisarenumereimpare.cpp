#include <iostream>

int main()
{
    int n, nr_impar;
    std::cin >> n;
    nr_impar = (n * 2) - 1;
    for (int i = 0; i < n; i++)
    {
        std::cout << nr_impar << " ";
        nr_impar -= 2;
    }
}