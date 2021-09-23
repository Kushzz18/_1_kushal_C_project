#include<stdio.h>
#include<conio.h>
#include<math.h>
float SI(float,float,float);
float CI(float,float,float);
int main()
{
	float si,ci,p,r,t;
	printf("Enter the values of principal,time and rate to find SI and CI: ");
	scanf("%f %f %f",&p,&t,&r);
	si=SI(p,t,r);
	ci=CI(p,t,r);
	printf("\nSimple intrest is %f ",si);
	printf("\n \nCompound intrest is %f ",ci);
	return 0;
}
float SI(float x,float y,float z)
{
	float result;
	result=(x*y*z)/100.0;
	return result;
}
float CI(float d,float e,float f)
{
	float result1;
	result1=d*pow((1+f/100.0),e);
	return result1;
}
