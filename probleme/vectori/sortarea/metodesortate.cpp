
int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // ---------------------------------------------------------- Sortare prin selectie

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }

    // ------------------------------------------------------------ Sortare Insertie

    for (int i = 1; i < n; i++)
    {
        // Luam Termenul v[i], il salvam in var x;
        int x = v[i];
        // Luam indicele, pana la i;
        int p = i - 1;
        // Parcurgem vectorul de la p la 0;
        // cat timp v[p] este mai mare ca v[i];
        while (v[p] > x && p >= 0)
        {
            // mutam v[p] spre dreapta
            v[p + 1] = v[p];
            // trecem la urmatorul termen.
            p--;
        }
        // Cand nu mai sunt nr mai mari ca x;
        // inseram x pe ultima pozitie comparata.
        v[p + 1] = x;
    }

    // ------------------------------------------------------------ Sortare Insertie Descrescator
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (v[p] < x && p >= 0)
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
    }

    // ------------------------------------------------------------- Sortare Bule

    bool sortat = false;
    while (!sortat)
    {
        sortat = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                sortat = false;
                int tmp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = tmp;
            }
        }
    }

    // --------------------------------------------------------------- Sortare Bule invers

    bool sortat = false;
    while (!sortat)
    {
        sortat = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < v[i + 1])
            {
                sortat = false;
                int tmp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}