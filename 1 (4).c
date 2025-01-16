#include<stdio.h>

	int fact(int n)
	{
	
	if(n>0)
	return(n*fact(n-1));
	else
	return 1;
	
}
int main()
{
	int n;
	long f;
	printf("\n enter a no");
	scanf("%d",&n);
	f=fact(n);
	printf("\n Factorial of no is:%d",n,f);
	return 0;
}
