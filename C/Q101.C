//c program to use array

#include<stdio.h>
#include<conio.h>

void main(){

	int n[100];
	int i,j,x,m,k,g;
	clrscr();
	printf("Enter number of numbers  : ");
	scanf("%d",&x);

	for(i=0;i<x;i++){

		scanf("%d",&n[i]);
	}
	m=n[0];
	for(j=1;j<x;j++){

		if(m<n[j])
			m=n[j];

	}

	g=n[0];
	for(k=1;k<x;k++){

		if(g>n[k])
			g=n[k];
	}

	printf("Max number : %d \nMin number : %d \nDifference : %d",m,g,m-g);

	getch();

}