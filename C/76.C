//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n=5;
	clrscr();
	for(i=0;i<=n;i++){

		for(j=1;j<=i;j++){
				printf("%c",'A'-2+j+j);

		}
	printf("\n");
	}
	getch();
}