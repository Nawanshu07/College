// WAP to read n elemnts in an linear array A and B then merge these two arrays into a third array and find out duplicate element

#include <stdio.h>

int main()
{
    int n, i, j, k = 0, found;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int A[n], B[n], C[2 * n];

    printf("Enter elements of array A: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    printf("Enter elements of array B: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }
    for (i = 0; i < n; i++)
    {
        C[k++] = A[i];
    }
    for (i = 0; i < n; i++)
    {
        C[k++] = B[i];
    }
    printf("Merged array: ");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\nDuplicate elements: ");
  for (int i = 0; i < n; i++)
  {
    for (int i = 0; j < n; i++)
    {
        if (A[i] == B[j])
        {
            printf("%d ", A[i]);
        }
    }
    
  }
  
    return 0;
}