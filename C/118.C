//c program to add strings

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
	char s1[25],s2[25];
	clrscr();
	printf("Enter first string :");
	gets(s1);
	printf("Enter second string :");
	gets(s2);
	strcat(s1,s2);
	printf("%s",s1);

	getch();
}