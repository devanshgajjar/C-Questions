//c program to check vowel

#include<stdio.h>
#include<conio.h>

void main(){

	char x;
	char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
	int i,count=0;
	clrscr();
	printf("Enter character : ");
	scanf("%c",&x);
	for(i=0;i<5;i++)
		if(vowel[i]==x){
			printf("It is a vowel");
			count=1;
		}
	if(count==0)
		printf("Not a vowel");
	getch();
}
