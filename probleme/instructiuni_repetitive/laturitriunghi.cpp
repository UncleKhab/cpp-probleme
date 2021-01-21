#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < n - 1; j++)
            {
                std::cout << " ";
            }
            std::cout << "*";
            for (int j = 0; j < n - 1; j++)
            {
                std::cout << " ";
            }
        }
        else if (i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                std::cout << " ";
            }
            std::cout << "*";
            for (int j = 0; j < s; j++)
            {
                std::cout << " ";
            }
            std::cout << "*";
            s += 2;
            for (int j = 0; j < n - i - 1; j++)
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}