#include <fstream>

using namespace std;

ifstream fin("maxim5.in");
ofstream fout("maxim5.out");

int main()
{
    int max = -1, current_max = -1, prev_count = 1000, count = 0, x;

    while (fin >> x)
    {
        if (current_max < x)
        {
            current_max = x;
        }
        if (x == 0)
        {
            if (prev_count > count)
            {
                max = current_max;
                current_max = 0;
                prev_count = count;
                count = 0;
            }
            else if (prev_count == count && current_max > max)
            {
                max = current_max;
                current_max = 0;
                prev_count = count;
                count = 0;
            }
            else
            {
                current_max = 0;
                count = 0;
            }
        }
        else
        {
            count++;
        }
    }
    fout << max << endl;
}