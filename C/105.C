//c program to seperate integers

#include<stdio.h>
#include<conio.h>

void main(){
	float array1[10],array2[10];
	int i,c[10],n;
	clrscr();
	printf("Enter number of numbers :");
	scanf("%d",&n);
	printf("Enter numbers :");
	for(i=0;i<n;i++){
		scanf("%f",&array1[i]);
	}
	for(i=0;i<n;i++){
		c[i]=array1[i];
		array2[i]=array1[i]-c[i];
		printf("%d\n",c[i]);
		printf("%f\n",array2[i]);
	}

	getch();

}