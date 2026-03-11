#include <stdio.h>

int main() {
    int queue[10] = {1,2,3,4};
    int r = 3;
    int f = 0;
    int ch;

    if (f > r)
        printf("UnderFlow!");
    else{
        printf("How many elements you wanna delete:");
        scanf("%d ",&ch);

        if (ch > (r-f+1))
        {
            printf("queue have less than %d elements",ch);
            return 0;
       }

       f+= ch;
        
    }
    
for (int i = f; i <= r ; i++)
{
    printf("%d ",queue[i]);
   
}
    return 0;
}