//c program to toggle the case

#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

void main(){

	int i;
	clrscr();
	char name[10];
	printf("Enter string : ");
	scanf("%s",name);
	for(i=0;i<strlen(name);i++){

		if(isupper(name[i])){
			name[i]=tolower(name[i]);


		}
		else if(islower(name[i])){
			name[i]=toupper(name[i]);
		}
	}
	printf("%s",name);
	getch();
}
