#include<string.h>
int main()
{
	char name[30];
	int len;
	printf("\n Enter name:");
	gets(name);
	len=strlen(name);
	printf(" name is'%s' length is'%d'",name,len);
	return 0;
}
