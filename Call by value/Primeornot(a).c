#include<stdio.h>
int prime(int);
int main()
{
	int num,P;
	printf("Enter a number to check whether it is prime or not: ");
	scanf("%d",&num);
	P=prime(num);
	if(P==2)
		{
		 printf("The entered number is a Prime number");
		}
	else
		{
		 printf("The entered number is a Composite number");
		}
	return 0;
}
int prime(int x)
{
	int i=0,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
		 count=count+1;
		}
	}
	return count;
}
