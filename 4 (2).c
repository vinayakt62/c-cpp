/*#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,temp;
  char x[10] = "geeks";
  char x1[10] = "forgeeks";
 // swap2(str1, str2);
  printf(" %s\n %s", x, x1);
 


while(i>j)
{
	temp=x[i];
	x[i]=x1[i];
	temp=x1[i];
	i++;
	j--;
}

return 0;
}*/
#include<stdio.h>
void swap(char *str1, char *str2)
{
	int i,j;
  char *temp = str1;
  str1 = str2;
  str2 = temp;
  i++;
  j--;
}  
   
int main()
{
  char *str1 = "geeks";
  char *str2 = "forgeeks";
  swap(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}
