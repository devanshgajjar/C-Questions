//c program to supress uppercase at bottom of the array

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main(){
	int i,j;
	char array[30];
	char array2[30];
	clrscr();
	printf("Enter string : ");
	gets(array);
	for(i=0;i<strlen(array);i++){

		for(j=strlen(array);j>=0;j--){

			if(isupper(array[i])){

				array2[j]=array[i];

			}

		}
	}
	printf("%s",array2);
	getch();
}