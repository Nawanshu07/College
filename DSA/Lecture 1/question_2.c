#include <stdio.h>

int main(){
    
    int  n , element , found = 0 , pos;
    printf("\nEnter the value of n:\n");
    scanf("%d",&n);

    int arr[100];
    printf("\nEnter %d numbers:\n",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the elemnt you wanna search: \n");
    scanf("\n%d",&element);

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
        printf("\nElement found on %d index\n",pos);
    }else{
        printf("\nElement not found\n");
    }
    
for (int i = pos; i < n-1; i++)
{
    arr[i] = arr[i+1];
}

n--;
arr[n] = 0;


int value;
printf("\nEnter the element you wanna replace with:");
scanf("%d",&value);


for (int i = n; i > pos; i--)
{
    arr[i] = arr[i-1];
}
n++;
arr[pos] = value;

for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}

    return 0;
}