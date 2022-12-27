#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}