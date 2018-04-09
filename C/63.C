//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n=5;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("  %c",'Z'-j+1);
			printf("\n");
	}
	getch();
}
