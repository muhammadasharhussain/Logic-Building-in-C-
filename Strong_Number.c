#include <stdio.h>

int main()
{
    int num,ognum,last,i,product,sum=0;
    printf("Input Num: ");
    scanf("%d",&ognum);
    num=ognum;
    while(num>0){
        product=1;
        last=num%10;
                for(i=1;i<=last;i++)  {     
                product*=i;
                    
                }
                sum+=product;
        num=num/10;
    } printf("sum= %d\n",sum);
    
if(sum==ognum)printf("Given number is a strong number");
else printf("Given number is not a strong number");
    return 0;
}
