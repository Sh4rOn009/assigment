
#include<stdio.h>

int main()
{
	int principle;
	int rate;
	int time;
	int interst;
	
	printf("enter the principle amount\n");
	scanf("%d",&principle);
	
	printf("enter the rate of intrest\n");
		scanf("%d",&rate);
		
	printf("enter the time peiod\n");
		scanf("%d",&time);	
		
		interst=principle*rate*time/100;
		printf("simple interst=%d",interst);
	   return 0;	
	}
		
		
		
		
		
		
	

