#include<stdio.h>
int main()
{
	int a[30], b[10], m, n, i, loc;
	
	printf("Enter size of A : ");
	scanf("%d", &m);
	printf("Enter %d elements into A : \n", m);
	for(i=0 ; i<m ; i++)
		scanf("%d", &a[i]);
	
	printf("Enter size of B : ");
	scanf("%d", &n);
	printf("Enter %d elements into B : \n", n);
	for(i=0 ; i<n ; i++)
		scanf("%d", &b[i]);
	
	printf("Enter location in A to insert B : \n");
	scanf("%d", &loc);
	
	for(i=m-1 ; i>=loc ; i--)
		a[i+n] = a[i];
	
	for(i=0 ; i<n ; i++)
		a[loc+i] = b[i];
		
	printf("Array A elements after insertion : \n");
	for(i=0 ; i<m+n ; i++)
		printf("%d\n", a[i]);
	return 0;
}
