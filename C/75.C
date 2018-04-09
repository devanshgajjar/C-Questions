//c program to print pattern

#include<stdio.h>
#include<conio.h>


void main(){
	int i,j,n=5,spaces,k=1;
	clrscr();

	for(spaces=n;spaces>=1;spaces--){

			for(i=1;i<spaces;i++){
				printf(" ");
			}
			for(j=i;j<=n;j++){
				printf("%d",k++);
				if(k>5)
					k=1;

				}
		printf("\n");
	}

	getch();

}
