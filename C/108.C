//c program to multiply matrices
#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,p,q,i,j,k,sum=0;
	int array1[10][10],array2[10][10],multiply[10][10];
	clrscr();

	printf("Enter the number of rows and columns of first matrix : \n");
	scanf("%d%d", &m, &n);
	printf("Enter the numbers of the first matrix\n");

	for(i=0;i<m;i++);
	for(j=0;j<n;j++);
	scanf("%d %d", &first[c][d]);

	printf("Enter the number of rows and columns of second matrix\n");
	scanf("%d %d", &p, &q);

	if(n!=p)
	printf("Matrix with entered orders cant be multiplied with eachother.\n");
	else
	{
	printf("Enter the numbers of second matrix\n");

	for(i=0; i<p; i++);
	for(j=0; j<q; j++);
	scanf("%d %d", &second[c][d]);

	for(i=0; i<m; j++)
	{
		for(j=0; j<q; j++)
		{
			for(k=0; k<p; k++)
			{
				sum=sum+ first[c][k]*second[k][d];
				}
	multiply[i][j]=sum;
	sum=0;
	}
	}
	printf("Product of entered Matrix:\n");

	for(i=0; i<m;i++)
	{
	for(j=0;j<q;j++)
	printf("%d ",multiply[i][j]);

	printf("\n");
	}
	}
	getch();
}

