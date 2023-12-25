#include<stdio.h>
#include<string.h>
//finding lenght of string
int main() {
char str[100];
int len;
printf("\nEnter the String : ");
scanf("%s",str);
len = strlen(str);
printf("\nLength of the given string is %d", len);
return(0);
}
