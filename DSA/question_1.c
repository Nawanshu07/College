#include <stdio.h>

int main()
{

    int n, element, found = 0, pos;
    printf("Enter the value of n:");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d numbers", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elemnt you wanna search: \n");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            pos = i;
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element found on %d index", pos);
    }
    else
    {
        printf("Element not found");
    }

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
    arr[n] = 0;
    printf("\nthe new array is --->");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\nThe Element had succesfully deleted from the array!!");

    return 0;
}