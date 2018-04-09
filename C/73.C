#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=5;
clrscr();
for(i=a;i>=1;i--)
{
for(j=i;j<a;j++)
printf(" ");
for(j=i;j>=1;j--)
printf("%c",-j+'z'+1);
printf("\n");
}
getch();
}