// WAP to read n elemnts in an linear array A and B then merge these two arrays into a third array and find out duplicate element in between A and B. Print the merged array and duplicate elements. /
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of elements in array A: ");
    scanf("%d", &n);
    printf("Enter the number of elements in array B: ");
    scanf("%d", &m);

    int A[n], B[m], C[n + m];
    int k = 0;

    printf("Enter elements of array A: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        C[k++] = A[i];
    }

    printf("Enter elements of array B: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
        C[k++] = B[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }

    printf("\nDuplicate elements: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                printf("%d ", A[i]);
                break;
            }
        }
    }

    return 0;
}
