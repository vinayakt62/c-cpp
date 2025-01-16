#include<stdio.h>
int fibonacci(int num)
{
	if(num==0)
	return 0;
	else
	return 1;
	
}



int main()
{
	int n,i,a=0,b=1,c;
	printf("\n Enter a no:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{	printf("\n %d",a)
		c=a+b;
		a=b;
		b=c;
		
		
	}
	return 0;
}
