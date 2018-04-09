//c program to add two matrices
#include <stdio.h>
#include<conio.h>
void main()
{
   int m,n,i,j,array1[10][10], array2[10][10], array3[10][10];
   clrscr();
   printf("Enter the number of rows and columns of matrix :");
   scanf("%d %d",&m,&n);
   printf("Enter the elements of first matrix : ");

   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
	 scanf("%d", &array1[i][i]);
      }
   }
   printf("Enter the elements of second matrix :");

   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
	    scanf("%d", &array2[i][j]);
      }
   }
   printf("Sum of entered matrices:-\n");

   for (i=0;i<m; i++){
      for (j=0;d<n;j++){
	 array3[i][j]=array1[i][j] + array2[i][j];
	 printf("%d ", array3[i][j]);
      }
      printf("\n");
   }
   getch();
}