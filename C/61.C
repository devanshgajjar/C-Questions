//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n=5;
	clrscr();

	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
			printf(" %d",i);
			printf("\n");
	}
	getch();
}
