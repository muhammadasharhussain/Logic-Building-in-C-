#include <stdio.h>

int main()
{
    int num,sum,i;
    printf("Input Num: ");
    scanf("%d",&num);
    
    sum=0;
    for(i=1;i<=num/2;i++){
       if(num%i==0){
           sum+=i;
       }
   } printf("Sum = %d\n",sum);
   
   if(sum==num)printf("%d is a Perfect Number",num);
   else        printf("%d is not a Perfect Number",num);
   
    return 0;
}
