//WAP to read two matrix A and B of (3 x 4) and (4 x 3) then multiply them and store into another matrix c 


#include <stdio.h>
int main() {
    int A[3][4], B[4][3], C[3][3];
    int i, j, k;

    printf("Enter elements of matrix A (3x4):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter elements of matrix B (4x3):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

  
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < ; i++)
    {
        
    }
    

    return 0;
}