//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n=5;
	clrscr();

	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=i;j++)
			printf(" %d",i%2);
			printf("\n");
	}
	getch();

}