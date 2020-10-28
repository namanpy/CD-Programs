// WAP to check whether the entered string is accepted or not for a given grammar.
//for (a+b)*abb
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char a[20];
int i,n,flag=0;
void main() {
    clrscr();
    printf("enter string");
    gets(a);
    n=strlen(a);
    i=0;
    if(a[n-1]=='b'&&a[n-2]=='b'&&a[n-3]=='a') {
        while(i<n-3) {
            if(a[i]=='a'||a[i]=='b') {
                i++;
                flag=flag+1;
            }
            else {
                printf("not accepted");
                break;
            }
        }
    }
    if(flag==n-3) {
        printf("string accepted");
    }
    getch();
}