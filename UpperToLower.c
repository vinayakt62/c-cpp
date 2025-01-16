#include <ctype.h>
#include <stdio.h>
//using namespace std;
int main()
{
  char str[30];
  printf("Enter your String(Upper case):");
  scanf("%s",str);
  int i = 0;
  
  while (str[i] != '\0')
  {
    if (str[i] > 64 && str[i] < 91) //or if(str[i]>='A' && str[i]<='Z')
      str[i] +=32;
    i++;
  }
  i=0;
  while (str[i] != '\0'){
  	printf("%c", str[i]);
  	i++;
  }
  return 0;
}

