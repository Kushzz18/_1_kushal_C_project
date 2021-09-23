#include<stdio.h>
int power(int,int);
int main()
{
	int result,num,p;
	printf("Enter the number and the exponential power: ");
	scanf("%d %d",&num,&p);
	result=power(num,p);
	printf("\n The %d power of the %d number is %d",p,num,result); 
	return 0;
}
int power(int x,int y)
{
	int i,mul=1;
	for(i=1;i<=y;i++) 
		{	
			mul=mul*x;
		}
	return mul;
}
