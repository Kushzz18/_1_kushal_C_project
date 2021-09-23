#include<stdio.h>
#include<math.h>
void armstrong(int);
int main()
{
	int num=0,ast=0;
	printf("Enter a number to check whether it is Armstrong or not: ");
	scanf("%d",&num); 
	armstrong(num);
return 0;
}
void armstrong(int x)
{
	int sum,rem,temp,temp1,count;
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
		printf("\n The entered number is Armstrong number");
	}
	else
	{
		printf("\n The entered number is not Armstrong number");
	}
}
