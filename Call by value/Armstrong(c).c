#include<stdio.h>
#include<math.h>
int armstrong();
int main()
{
	int ast=0;
	ast=armstrong();
	if(ast==1)
	{
		printf("\n The entered number is Armstrong number");
	}
	else
	{
		printf("\n The entered number is not Armstrong number");
	}
return 0;
}
int armstrong()
{
	int num=0,sum=0,rem=0,temp=0,temp1=0,count=0;
	printf("Enter a number to check whether it is Armstrong or not: ");
	scanf("%d",&num); 
	temp=num; 
	temp1=num; 
	while(temp>0) 
	{  
		count=count+1; 
		temp=temp/10; 
	}
	while(num>0)
	{
   		rem=num%10;
		sum=sum+pow(rem,count); 
		num=num/10;
	}
	if(sum==temp1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
