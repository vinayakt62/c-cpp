#include<stdio.h>
#include<string.h>
void main()
{
    char ch[20];
    char ch1[20];
    printf("Enter Your Name :");
    scanf("%s",ch);
    int  j = (strlen(ch)) - 1;
    for(int i = 0 ; i< strlen(ch) ;i++)
    {
        ch1[i] = ch[j];
        printf("\n|CH : %c : %d|CH1 : %c : %d|",ch1[i],i,ch[i],i);
        j--;
    }
    printf("\nYour Name rev  :%s",ch1);
} 