#include <stdio.h>

int main() {
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,65,76,87,675} , element = 11 , found_on ;
    int size = sizeof(arr) / sizeof(int);
    int low = 0 , high = size - 1;

    while (low<=high)
    {
        int mid = (low + high)   / 2;
        if ( arr[mid] == element)
        {
            found_on =  mid;
        }
        if (element > mid )
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