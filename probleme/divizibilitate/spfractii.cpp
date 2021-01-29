#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    else
    {
        return gcd(m, n % m);
    }
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min = b, max = d;
    if (b > d)
    {
        min = d;
        max = b;
    }
    int m_bd = b * d / gcd(max, min);
    int m_a = m_bd / b * a;
    int m_c = m_bd / d * c;
    int m_ac = m_a + m_c;
    max = m_bd;
    min = m_ac;
    if (m_ac > m_bd)
    {
        max = m_ac;
        min = m_bd;
    }
    int m_abcd = gcd(max, min);
    m_ac = m_ac / m_abcd;
    m_bd = m_bd / m_abcd;
    cout << m_ac << " " << m_bd << "\n";

    int p_ac = a * c;
    int p_bd = b * d;
    max = p_ac;
    min = p_bd;
    if (p_bd > p_ac)
    {
        max = p_bd;
        min = p_ac;
    }
    int p_gcd = gcd(max, min);
    p_ac = p_ac / p_gcd;
    p_bd = p_bd / p_gcd;

    cout << p_ac << " " << p_bd << "\n";
}