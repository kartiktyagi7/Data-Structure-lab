#include <stdio.h>

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int test[n];
    int x = 1;
    test[0] = arr[1];
    for (int i = 1; i < n; i++)
    {
        if (search(test, x, arr[i]))
        {
            test[x] = arr[i];
            x++;
        }
        else
        {
            test[x] = arr[i];
            x++;
            printf("%d repeated\n", arr[i]);
        }
    }

    return 0;
}