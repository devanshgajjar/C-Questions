//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n=5,spaces,k=1;
	clrscr();

	for(spaces=n;spaces>=1;spaces--){

		for(i=0;i<spaces;i++){
			printf(" ");
		}
		for(j=i;j<=n;j++){
			if(i%2==0)
				printf("%d",k);
			else
				printf("%c",'A'+k-1);
		}
	k++;
	printf("\n");
	}
	getch();
}
