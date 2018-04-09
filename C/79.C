//c program to print pattern

#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n=5,spaces,k=1,x=0;
	clrscr();

	for(spaces=n;spaces>=1;spaces--){

		for(i=0;i<spaces;i++){
			printf(" ");
		}
		for(j=i;j<=n;j++){
			if(i%2==0)
				printf("%c",'Z'+x);

			else
				printf("%c",'A'+k-1);
		}
		if(i%2==0)
			x--;
		else
			k++;
	printf("\n");
	}
	getch();
}
