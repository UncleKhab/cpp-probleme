#include <fstream>

using namespace std;
ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int nr_divizori(long long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int cnt = 2;
    long long int d = 2;
    while (d * d < n)
    {
        if (n % d == 0)
        {
            cnt += 2;
        }
        d++;
    }
    if (d * d == n)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    fin >> n;
    long long int v[n];
    int div[n];
    for (int i = 0; i < n; i++)
    {
        fin >> v[i];
        div[i] = nr_divizori(v[i]);
    }

    // selection sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int aux_div = div[i];
    //         long long int aux_v = v[i];
    //         if (div[i] < div[j])
    //         {
    //             v[i] = v[j];
    //             v[j] = aux_v;
    //             div[i] = div[j];
    //             div[j] = aux_div;
    //         }
    //         else if (div[i] == div[j])
    //         {
    //             if (v[i] > v[j])
    //             {
    //                 v[i] = v[j];
    //                 v[j] = aux_v;
    //                 div[i] = div[j];
    //                 div[j] = aux_div;
    //             }
    //         }
    //     }
    // }
    // insertion sort
    // for (int i = 1; i < n; i++)
    // {
    //     int aux_div = div[i];
    //     int aux_x = v[i];
    //     int p = i - 1;

    //     while (aux_div >= div[p] && p >= 0)
    //     {
    //         if (aux_div == div[p] && aux_x > v[p])
    //         {
    //             int aux_aux = aux_x;
    //             aux_x = v[p];
    //             v[p] = aux_aux;
    //         }
    //         div[p + 1] = div[p];
    //         v[p + 1] = v[p];
    //         p--;
    //     }
    //     v[p + 1] = aux_x;
    //     div[p + 1] = aux_div;
    // }
    // Bubble Sort
    bool sortat = false;
    int m = n;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p - 1; i++)
        {
            if (div[i] < div[i + 1])
            {
                sortat = false;

                int aux_div = div[i];
                int aux_x = v[i];

                div[i] = div[i + 1];
                div[i + 1] = aux_div;

                v[i] = v[i + 1];
                v[i + 1] = aux_x;

                m = i + 1;
            }
            else if (div[i] == div[i + 1])
            {
                if (v[i] > v[i + 1])
                {
                    sortat = false;

                    int aux_div = div[i];
                    int aux_x = v[i];

                    div[i] = div[i + 1];
                    div[i + 1] = aux_div;

                    v[i] = v[i + 1];
                    v[i + 1] = aux_x;

                    m = i + 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        fout << v[i] << " ";
    }
}