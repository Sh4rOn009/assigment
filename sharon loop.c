#include<stdio.h>
int main()
{
	int num;
	int i;
	printf("Enter the numbers");
	scanf("%d",&num);
	printf("--------even the numbers--------");
	for(i=2;i<=num;i=i+2)
	{
		printf("%d\n",i);
	}
	printf("--------odd the numbers--------");
	for(i=1;i<=num;i=i+2)
	{
		printf("%d\n",i);
	}
	return 0;
}
