#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[n + m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    int k = n;

    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < k; j++)
        {
            if (b[i] == c[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}