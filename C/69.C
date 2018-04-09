//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n=5;

	char c;
	clrscr();

	for(i=n;i>=1;i--)
	{
		for(j=1;j<i;j++)
			printf("  ");
		c='Z';
		for(j=n;j>=i;j--)
			printf(" %c",c--);
		printf("\n");
	}

	getch();
}