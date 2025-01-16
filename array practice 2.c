#include<stdio.h>
int main()
{
	int a[50],i,n,m,element,loc;
	printf("\n Enter array size:");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n Enter insert element:");
	scanf("%d",&element);
	printf("\n Enter insert location:");
	scanf("%d",&loc);
	//loc 2
	// key
	for(i=n-1;i>loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=element;
	
	for(i=0;i<n;i++)
	printf("\n element is  %d \n",a[loc]);
	
	
	
	return 0;
}

