#include    <iostream>
using namespace std;
//Să se scrie un program care ordonează crescător elementele unui vector.
int main()
{
    int n, v[105];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}