//c program using array

#include<conio.h>
#include<stdio.h>

void main(){

	int x;
	int i,a,b,c;
	clrscr();
	a=b=c=0;
	int n[100];
	printf("Enter number of numbers : ");
	scanf("%d",&x);

	for(i=0;i<x;i++){

		scanf("%d",&n[i]);

		if(n[i]==0)
			a++;
		else if(n[i]>=1)
			b++;
		else if(n[i]<0)
			c++;


	}

	printf("Number of 0s : %d , +ves : %d , number of -ves : %d: ",a,b,c);

	getch();
}