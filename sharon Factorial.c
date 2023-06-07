#include<stdio.h>  
int main()    
{    
 int i,num=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      num=num*i;    
  }    
  printf("Factorial of %d is: %d",number,num);    
return 0;  
}   
