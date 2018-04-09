// c program to find length

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char string[25];
	clrscr();
	printf("Enter string :");
	gets(string);
	printf("%d",strlen(string));
	getch();

}