#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> B;
    cin >> S;
    switch (S)
    {
    case '+':
        cout << A + B << endl;
        break;
    case '-':
        cout << max(A, B) - min(A, B) << endl;
        break;
    case '*':
        cout << A * B << endl;
        break;
    case '/':
        cout << max(A, B) / min(A, B) << endl;
        break;
    default:
        break;
    }
}