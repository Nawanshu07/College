#include <stdio.h>

int main() {
    int queue[10], item , n , max = 10 , r = -1 , f = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

if (n >= max)
{
    printf("Overflow\n");
    return 0;
}
else{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element to enqueue: ");
        scanf("%d", &item);

        if (r == 9)
            printf("Overflow\n");
        else
        {
            r++;
            queue[r] = item;
        }
    }
}
    
    for(int i = f; i<=r ; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}