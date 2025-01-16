#include<stdio.h>
int main()
{
	int i=0,j=0,temp;
	 char str[30];
	 printf("\n Enter a string:");
	 gets(str);
	  while(str[i]!='\0')
	  {
	  	if(str[i]>'A'&&str[i]=='z');
	  	
	  	{
	  		str[i]=str[i]+32;
		  }
		  i++;
	  }
	  printf(" %s",str);
	 
	 
	 return 0;
}
