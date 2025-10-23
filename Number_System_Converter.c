// decimal to binary
#include <stdio.h>
int main(){
    int option;
    printf("Number System Converter:\n");
    
    int dec,j,i=7;
    int output[8]={0};
    char output2[8]={0};
    printf("Enter an 8 Bit Number: ");
    scanf("%d",&dec);

    printf("Press 1 for Binary\nPress 2 for Octal\nPress 3 for Hexadecimal\n");
    scanf("%d",&option);
    switch(option){
    case 1:{
            if (dec<=255){
                        while(dec>0){
                            output[i]=dec%2;
                            dec=dec/2;
                            i--;
                        }
                        for(j=0;j<8;j++)
                        printf("%d",output[j]);
            }
            else{
                printf("Overflow, Use an 8 Bit Number");
            }
    break;
    }
    case 2:{
            while(dec>0){
                output[i]=dec%8;
                dec=dec/8;
                i--;
                }
                for(j=0;j<8;j++)
                printf("%d",output[j]);
    break;
    }
    case 3:{
            while(dec>0){
                if(dec%16==0)
                    output2[i]='0';
                else if(dec%16==1)
                    output2[i]='1';
                else if(dec%16==2)
                    output2[i]='2';
                else if(dec%16==3)
                    output2[i]='3';
                else if(dec%16==4)
                    output2[i]='4';
                else if(dec%16==5)
                    output2[i]='5';
                else if(dec%16==6)
                    output2[i]='6';
                else if(dec%16==7)
                    output2[i]='7';
                else if(dec%16==8)
                    output2[i]='8';
                else if(dec%16==9)
                    output2[i]='9';
                else if(dec%16==10)
                    output2[i]='A';
                else if(dec%16==11)
                    output2[i]='B';
                else if(dec%16==12)
                    output2[i]='C';
                else if(dec%16==13)
                    output2[i]='D';
                else if(dec%16==14)
                    output2[i]='E';
                else if(dec%16==15)
                    output2[i]='F';
                
                dec=dec/16;
                i--;
            }
                for(j=0;j<8;j++)
                printf("%c",output2[j]);
    break;
    }
    default:printf("invalid option");
}
return 0;
}