// WAP to find the no. of tokens and list them according to their category in an expression.
//To count no of tokens
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int con=0,var=0,op=0;

void check(char c)
{
    if(isalpha(c))
    var++;
    if(c==47||c==42||c==43||c==45||c==61||c==94)
    op++;
}
/*ASCII values:
'/'=50
'*'=53
'+'=60
'-'=74
'='=85
'^'=96
*/
int main()
{
    char str[13];
    char c;
    int i;
    clrscr();
    printf("Enter string:\n");
    scanf("%s",&str);
    for(i=0;i<13;i++)
    {
         c=str[i];
         check(c);
    }
    for(i=0;i<13;i++)
    {
         if(isdigit(str[i]) && isdigit(str[i+1]))
         {
             i=i+2;
             con++;
         }
         else if(isdigit(str[i]))
         con++;
    }
    printf("Operators:%d \nVariables:%d \nConstants:%d", op, var, con);
    printf("\nTotal tokens=%d", op+var+con);
    getch();
    return 0;
}