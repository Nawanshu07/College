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

    printf("\n");

    int element;
    printf("Enter the element:");
    scanf("%d",&element);
    
    int low = 0, high = n-1 , found_on  = 0;

   while (low<=high)
    {
        int mid = (low + high)   / 2;
        if (arr[mid] == element)
        {
            found_on =  mid;
        }
        if (element > arr[mid] )
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found_on != 0)
    {
        printf("The element %d is found on %d index",element,found_on);
    }
    else{
        printf("Element not found");
    }


    return 0;
}