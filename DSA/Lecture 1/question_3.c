#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[100];
    int n;
    int pos = 3;
    int value = 99;

    printf("How many numbers you wanna enter in array?:");
    scanf("%d", &n);

    printf("Enter %d elements:", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    n++;
    arr[pos] = value;
    printf("\nThe new array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("\nThe largest number is %d\n", largest);
    getch();
}