//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n=5;
	clrscr();

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");

		for(j=i;j>=1;j--)
			printf(" %d",j);
			printf("\n");


	}
	getch();
}
