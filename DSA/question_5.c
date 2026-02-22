//WAP to show the working of bubble sort

#include <stdio.h>

int main()
{
    int arr[10] = {23, 45, 2, 78, 21};
    int n = 5;
    int issorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        issorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}