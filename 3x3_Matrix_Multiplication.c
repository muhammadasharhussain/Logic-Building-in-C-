#include<stdio.h>

int main(){

    int A[3][3], B[3][3], C[3][3];
    int i,j,k;

    printf ("Enter Matrix A (Row Wise):\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf ("Enter Matrix B (Row Wise):\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    printf("Multiplied by \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=0;
            for(k=0;k<3;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("\nProduct of A & B is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}