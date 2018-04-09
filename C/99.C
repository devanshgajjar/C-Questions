//c program to use array

#include<conio.h>
#include<stdio.h>

void main(){

	int x;
	int i,a,b;
	clrscr();
	a=b=0;
	int n[100];
	printf("Enter number of numbers : ");
	scanf("%d",&x);

	for(i=0;i<x;i++){

		scanf("%d",&n[i]);

		if(n[i]%2==0)
			a++;
		else if(n[i]%2==1)
			b++;


	}

	printf("Number of Odds : %d , Evens : %d ",b,a);

	getch();
}