#include<stdio.h>
int greatest(int,int,int);
int main()
{
	int a,b,c,result;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	result=greatest(a,b,c);
	if(result==1)
		{
			printf("The Greatest Number is %d",a);
		}
		else if(result==2)
		{
			printf("The Greatest Number is %d",b);
		}
		else
			{
				printf("The Greatest Number is %d",c);
			}
		return 0;
}
int greatest(int x,int y,int z)
{
	int temp=0;
	if (x>y && x>z)
		{
			temp=1;
		}
	else if(y>x && y>z)
		{
			temp=2;
		}
	else
		{
			temp=3;
		}
	return temp;
}
