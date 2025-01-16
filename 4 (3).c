#include<stdio.h>

int test(){
	
}

int main()
{
	int a[50],n,i,key,loc;
	printf("\n Enter size");
	scanf("%d",&n);
	printf("Enter  Element ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter element to insert");
	scanf("%d",&key);
	printf("Enter location to input");
	scanf("%d",&loc);
	//for(i=n-1;i>loc;i--)
	//{
	//	a[i+1]=a[i];
		
	//}
	int tmp = a[loc];
	for(i=loc;i<n;i++)
	{
		a[i] =	a[i-1];
			
	}
	a[loc]=key;
	
	for(i=0;i<n;i++)
	{
	printf("elements is %d\n", a[i]);
		
	}
//	return 0;

}
