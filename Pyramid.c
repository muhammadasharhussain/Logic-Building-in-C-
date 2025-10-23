#include <stdio.h>
int main()
{
    int i,j,k,n;
    char c;
    printf("Enter n:\n");
    scanf("%d",&n);

    printf("Enter Any Character:\n");
    scanf(" %c",&c);

    for(i=1;i<=n;i++) {
        for(k=1;k<=n-i;k++)
            printf(" ");
            
        for(j=1;j<=i;j++)
            printf("%c ",c);
            
        printf("\n");
    }
    
    return 0;
}
