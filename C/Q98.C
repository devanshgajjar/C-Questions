//c program to use array

#include<stdio.h>
#include<conio.h>

void main(){

	int x;
	int i,j;
	float avg,sum=0.0;
	clrscr();
	printf("Enter number of numbers : ");
	scanf("%d",&x);
	int n[30];
	for(i=0;i<x;i++){
		scanf("%d",&n[i]);

		sum=sum+n[i];
	}

	avg=sum/x;

	printf("%.2f",avg);

	getch();
}