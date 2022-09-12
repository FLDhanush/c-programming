#include<stdio.h>
int main()
{
	int a,d=0;
	printf("enter number:");
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			d=d+i;
		}
	}
	if(d==a)
	{
		printf("prefect number");
	}
	else
	{
		printf("not perfect number");
	}
}