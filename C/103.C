//program to find number of occurances

#include<stdio.h>
#include<conio.h>

void main(){
	int count=0,i,c,x;
	int a[30];
	clrscr();
	printf("Enter number of elements : ");
	scanf("%d",&c);
	printf("Enter elements : \n");
	for(i=0;i<c;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to find: ");
	scanf("%d",&x);
	for(i=0;i<c;i++){
		if(a[i]==x)
			count++;
	}
	printf("Number of occurances : %d ",count);
	getch();
}