#include<stdio.h>
int palin();
int main()
{
	int a;
	a=palin();
	if(a==1)
	{
		printf("\nThe given number is palindrome");
	}
	else
	{
		printf("\nThe given number is not palindrome");
	}
	return 0;
}
int palin()
{
	int temp=0,num=0,rev=0,rem=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
   		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


