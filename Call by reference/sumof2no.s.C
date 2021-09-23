#include<Stdio.h>
int sum(int *,int *);
int main()
{

	int a,b,result=0;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	result=sum(&a,&b);
	printf("\nThe sum of given numbers is %d",result);
	return 0;
}
int sum(int *x,int *y)
{
	int z;
	z=*x+*y;
	return z;
}
