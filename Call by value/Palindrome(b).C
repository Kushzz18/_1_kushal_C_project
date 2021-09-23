#include<stdio.h>
#include<conio.h>
void palin(int);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	palin(num);
	return 0;
}
void palin(int x)
{
	int rev=0,rem=0,temp;
	temp=x;
	while(x>0)
	{
   		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	if(temp==rev)
	{
		printf("\nThe given number is palindrome");
	}
	else
	{
		printf("\nThe given number is not palindrome");
	}
}

