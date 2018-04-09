//c program to supress all the zeros

#include<stdio.h>
#include<conio.h>

void main(){
	int count=0,a,n[30],i,j;
	clrscr();
	printf("Enter number of elements : ");
	scanf("%d",&a);
	printf("Enter elements : \n");
	for(i=0;i<a;i++){
		scanf("%d",&n[i]);

	}
	for(i=0;i<a;i++){
		if(n[i]>0)
			n[count++]=n[i];
	}
	while(count<a){
		n[count++]=0;
	}
	printf("Final array is: ");
	for(i=0;i<a;i++){
		printf("%d\n",n[i]);
	}
	getch();
}