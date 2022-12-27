#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 5, 6, 8, 9};
    int arr2[] = {2, 4, 5, 7, 9, 10};

    int arr3[12];
    for (int i = 0; i < 6; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 6; i < 12; i++)
    {
        arr3[i] = arr2[i - 6];
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (arr3[i] > arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    for (int i = 0; i < 12; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}