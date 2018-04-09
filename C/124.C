//c program to convert to uppercase and lowercase

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main(){

	int i;
	char name[30];
	clrscr();
	printf("Enter a string : " );
	gets(name);

	for(i=0;i<strlen(name);i++){

		if(i%2==0){
			name[i]=tolower(name[i]);

		}

		else{
			name[i]=toupper(name[i]);
		}
	}

	printf("%s",name);
	getch();
}