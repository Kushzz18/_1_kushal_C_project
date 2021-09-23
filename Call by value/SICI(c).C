#include<stdio.h>
#include<conio.h>
#include<math.h>
float SI();
float CI();
int main()
{
	float si , ci;
	si=SI();
	ci=CI();
	printf("\nSimple intrest is %f ",si);
	printf("\n \nCompound intrest is %f ",ci);
	return 0;
}
float SI()
{
	float i,p,r,t;
	printf("Enter the values of principal,time and rate to find Simple Interest: ");
	scanf("%f %f %f",&p,&t,&r);
	i=(p*t*r)/100.0;
	return i;
}
float CI()
{
	float a,p,r,t;
	printf("\n \nEnter the values of principal,time and rate to find Compound Interest: ");
	scanf("%f %f %f",&p,&t,&r);
	a=p*pow((1+r/100.0),t);
	return a;
}
