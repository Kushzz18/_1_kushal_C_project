#include <stdio.h>
int largest(int[],int);
int main() 
{
  int i=0,n=0,num[30],result;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) 
  {
    printf("\nNumber %d : ",i+1);
	scanf("%d",&num[i]);
  }
  result=largest(num,n);
  printf("\nThe largest number in the given series is %d", result);
  return 0;
}
int largest (int x[],int y)
{
	int large,i;
	large=x[0];
  	for (i = 1; i < y; i++)
   	{
   	 	if (x[i]>large) 
			{
     		 large = x[i];
   			}
  	}
  	return large;
}
