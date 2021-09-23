#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int num=0,ast=0;
	printf("Enter a number to check whether it is Armstrong or not: ");
	scanf("%d",&num); 
	ast=armstrong(num);
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
int armstrong(int x)
{
	int sum=0,rem=0,temp=0,temp1=0,count=0;
	temp=x; 
	temp1=x; 
	while(temp>0) 
	{ 
		count=count+1; 
		temp=temp/10; 
	}
	while(x>0)
	{
   		rem=x%10;
		sum=sum+pow(rem,count); 
		x=x/10;
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
