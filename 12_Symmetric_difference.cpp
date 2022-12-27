#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[10], b[10], c[20], d[10], sd[20];
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
    int l = 0;
    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
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
        else
        {
            d[l] = b[i];
            l++;
        }
    }

    int s = 0;
    for (int i = 0; i < k; i++)
    {
        int flag = 0;
        for (int j = 0; j < l; j++)
        {
            if (c[i] == d[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            sd[s] = c[i];
            s++;
        }
    }

    for (int i = 0; i < s; i++)
    {
        cout << sd[i] << " ";
    }

    return 0;
}