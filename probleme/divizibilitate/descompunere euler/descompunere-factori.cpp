#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    int p = 2;
    // Descompune in factori nr n;
    // n > 2;
    while (n > 1)
    {
        // luam pe rand incepand cu 2, cat timp se n se imparte la p
        // n devine n/p si printam p
        while (n % p == 0)
        {
            cout << p << " ";
            n /= p;
        }
        // dupa ce se iese din loop, incrementam p, sa trecem la urmatorul nr prim(pentru ca deja n a fost impartit la restul)
        p++;
        // daca p*p este mai mare ca n inseamna ca n este prim
        // deci p devine n, scurtand timpul de executie
        if (p * p > n)
        {
            p = n;
        }
    }
}