//c program to print array in increasing order

#include<stdio.h>
#include<conio.h>

void main(){

	int i,j,n[50],a,x;
	clrscr();
	printf("Enter the number of elements : ");
	scanf("%d",&a);
	printf("Enter the numbers :\n" );
	for(i=0;i<a;i++){
	     scanf("%d",&n[i]);
	}
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(n[i]>n[j]){
				x=n[i];
				n[i]=n[j];
				n[j]=x;

			}

		}
	}
	printf("Order is : \n");
	for(i=0;i<a;i++){
		printf("%d\n",n[i]);
	}
	getch();
}