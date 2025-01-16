#include<stdio.h>
int main()
{
	int a[100],b[50],m,n,i,loc;
	printf("\n Size of first array:");
	scanf("%d",&m);
	
	printf("\n Enter first array elements:");
	for(i=1;i<m;i++)
	{
		scanf("\n %d",&a[i]);
	}
	
	printf("\n Size of second array:");
	scanf("%d",&n);
	
	printf("\n Enter second array elements:");
	for(i=1;i<n;i++)
	{
		scanf("%d\n",&b[i]);
	}
	
	
//	printf("\n Enter loc:");
	//scanf("%d",&loc);
		printf("Enter location in A to insert B : \n");
	scanf("%d", &loc);
	
	for(i=m-1;i>=loc;i--)
	{
		a[i+n]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[loc+i]=b[i];
	}
	printf("\n  array A elements after insertaion are");
	for(i=0;i<=m+n;i++)
	printf("\n %d",a[i]);
	
	
	return 0;
}
