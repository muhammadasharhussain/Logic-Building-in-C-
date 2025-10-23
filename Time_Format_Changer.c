#include <stdio.h>

int main()
{
	int hour,min;
	char ampm;
	printf("Input Hour: ");
	scanf("%d",&hour);
	printf("Input min: ");
	scanf("%d",&min);
	
	if (min>=0 && min<60){
	
	   if(hour<12 && hour>0) {
		printf("AM or PM (Press A/P)");
		scanf(" %c",&ampm);
        		if(ampm=='A'|| ampm== 'a')
        		    printf("Time: %d:%d",hour,min);
        		else if(ampm=='P'|| ampm== 'p'){
		            hour+=12;
		            printf("Time: %d:%d",hour,min);
        		}
	   }


        else if(hour>12 && hour<=23) {
            hour-=12;
		    printf("Time: %d:%d PM",hour,min);
        }
        
        else if(hour==12) {
            printf("AM or PM (Press A/P)");
		    scanf(" %c",&ampm);
		    
            if(ampm=='A'|| ampm== 'a'){
                    hour-=12;
        		    printf("Time: %d:%d",hour,min);
            }
            else if(ampm=='P'|| ampm== 'p')
		            printf("Time: %d:%d PM",hour,min);
            
        }
        else
        printf("wrong input");
    
	}
	
	else{
	    printf("wrong input");
	}
return 0;
}

