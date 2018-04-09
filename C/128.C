//c program to print in lexi order

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	int i,j;
	char name[30];
	clrscr();
	printf("Enter string : ");
	gets(name);
	for(i=0;i<strlen(name);i++){

		for(j=i;j<strlen(name);j++){
			if(name[i]>name[j]){
				name[i]=name[j];
				printf("%c",name[i]);
			}
			else
				name[i]=name[i];
				printf("%c",name[i]);
		}
	}
	getch();
}