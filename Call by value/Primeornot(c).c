#include<stdio.h>
int prime();
int main()
{
	int P;
	P=prime();
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
int prime()
{
	int i=0,count=0,num;
	printf("Enter a number to check whether it is prime or not: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
		 count=count+1;
		}
	}
	return count;
}
