/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N=5;
    char c;
    clrscr();


    for(i=N; i>=1; i--)
    {
	// Logic to print spaces
	for(j=1; j<i; j++)
	{
	    printf(" ");
	}

	// Logic to print numbers
	c='A';
	for(j=N; j>=i; j--)
	{
	    printf("%c ",c++);
	}

	printf("\n");
    }
    getch();
    return 0;
}