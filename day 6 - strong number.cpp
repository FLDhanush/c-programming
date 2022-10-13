#include<stdio.h>
int fact(int r)
{
	int c=1,i;
	for(i=1;i<=r;i++)
	{
		c=c*i;
	}
	printf("%d factorial of numbers are= %d\n",r,c);
}
int main()
{
	int a,k,r,f,b=0,z;
	printf("1 for integers\n");
	printf("2 for decimal or float\n");
	printf("enter the choice= ");
	scanf("%d",&z);
	if(z==1){
	printf("enter the number= ");
	scanf("%d",&a);
	k=a;
	while (k!=0)
	{
		r=k%10;
		f=fact(r);
		k=k/10;
		b=b+f;
	}
	if (b==a)
	{
		printf("\n%d is not a strong number",a);
	}
	else
	{
		printf("\n%d is a strong number",a);
	}}
	else
	{
		printf("invalid input\nONLY FOR INTEGER VALUES");
	}
}
