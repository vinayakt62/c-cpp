/*#include<stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1,n3, i;
 
    //Ask user to input number of terms 
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
 
   //printf("First %d terms of Fibonacci series:\n",n);
    for ( i = 0 ; i < n ; i++ )
    {
       if ( i <= 1 )
          n3 = i;
       else
       {
          n3= n1 + n2;
          n1 = n2;
          n2 = n3;
       }
       printf("%d\n",n3);
    }
 
    return 0;
}*/

#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,c;
	printf("\n Enter a no:");
	scanf("%d",&n);
	//printf("\n %d",a);
	for(i=1;i<=n;i++)
	
	{
		printf("\n %d",a);
		c=a+b;
		a=b;
		b=c;
		
		
	}
	return 0;
}
