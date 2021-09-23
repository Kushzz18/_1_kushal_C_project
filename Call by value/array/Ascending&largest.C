#include<stdio.h>
int ascending(int[],int);
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
  result=ascending(num,n);
  printf("\n The largest number is %d ",result);
  return 0;
}
int ascending(int x[],int y)
{
	int i,j,tmp=0;
	for(i=0; i<y; i++)
    {
        for(j=i+1; j<y; j++)
        {
            if(x[i] > x[j])
            {
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
     printf("\nThe given numbers in sorted ascending order:\n \n");
    for(i=0; i<y; i++)
    {
        printf("%4d", x[i]);
    }
    return x[9];
}
