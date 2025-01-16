#include<string.h>
int main()
{

	char name[30];
	printf("\n Enter string");
	gets(name);
	return 0;


int i=0;
while(name[i]!='\0')
{
	if(name[i]>'A' && name[i] <='Z')
	{
		name[i]=name[i]+32;
	}
	i++;
}	
return 0;
}
