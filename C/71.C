#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=5;
clrscr();
for(i=1;i<=a;i++)
{
for(j=i;j>1;j--)
printf(" ");
for(j=i;j<=a;j++)
printf("%c",j+'A'-1);
printf("\n");
}
getch();
}