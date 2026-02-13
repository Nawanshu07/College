#include <stdio.h>

int main() {
    int n , m;
    printf("Enter the value of n :");
    scanf("%d",&n);

    printf("Enter the value of m :");
    scanf("%d",&m);

    int arr[20][20];

    printf("Enter elements of matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           scanf("%d", &arr[i][j] );
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][j] = 1;
            }
            
        }
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("%d ", arr[i][j] );
        }
        printf("\n");
    }
    
    return 0;
}