# kushal-s-project
This is my 1st ever project for learning GitHub
#include<stdio.h>
#include<string.h>
struct emp
{
	char name[25];
	int age;
	char address[100];
	double tel_no;
};
void function(struct emp []);
int i=0,j=0,n,x;
int main()
{
	struct emp s[20];
	printf("Enter the number of records you want to store: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter the details of the person:\n");
	for(i=0;i<n;i++)
	{
		printf("\n***********************************\n");
		printf("Enter name of %d person: ",i+1);
		fgets(s[i].name,25,stdin);
		fflush(stdin);
		printf("Enter age of %d person: ",i+1);
		scanf("%d",&s[i].age);
		fflush(stdin);
		printf("Enter address of %d person: ",i+1);
		fgets(s[i].address,100,stdin);
		fflush(stdin);
		printf("Enter phone no. of %d person: ",i+1);
		scanf("%lf",&s[i].tel_no);
		fflush(stdin);
	}
	function(s);
	return 0;
}
void function(struct emp y[])
{
	struct emp temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if(strcmp(y[i].name,y[j].name)>0)
					{
						temp=y[i];
						y[i]=y[j];
						y[j]=temp;
					}
			}
	}		
	printf("\nThe records of people whose age is greater than 25:\n");
	for(i=0;i<n;i++)
	{
		if(y[i].age>=25)
		{
			x=1;
			printf("\n*********************************\n");
			printf("\nName: %s",y[i].name);
			printf("\nAge = %d",y[i].age);
			printf("\nAddress= %s",y[i].address);
			printf("\nTelephone Number= %lf",y[i].tel_no);
		}
	}
	if(x!=1)
	{
		printf("\nThere is no record of person above age 25!");
	}
}
