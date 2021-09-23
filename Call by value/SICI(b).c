#include<stdio.h>
#include<conio.h>
#include<math.h>
void SI(float,float,float);
void CI(float,float,float);
int main()
{
	float si,ci,p,r,t;
	printf("Enter the values of principal,time and rate to find SI and CI: ");
	scanf("%f %f %f",&p,&t,&r);
	SI(p,t,r);
	CI(p,t,r);
	return 0;
}
void SI(int x,float y,float z)
{
	float result;
	result=((float)x*y*z)/100.0;
	printf("\nSimple intrest is %f ",result);
}
void CI(int d,float e,float f)
{
	float result1;
	result1=d*pow((1+f/100.0),e);
	printf("\n \nCompound intrest is %f ",result1);
}
