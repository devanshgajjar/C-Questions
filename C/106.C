//c program to find min of 2 arrays

#include<stdio.h>
#include<conio.h>

void main(){
	int k,i,array1[10],array2[20],array3[20],n,n2,j,a;
	clrscr();
	printf("Enter number of numbers for array1 :");
	scanf("%d",&n);
	a=0;
	printf("Enter elements for array1:");
	for(i=0;i<n;i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter number of numbers for array2 :");
	scanf("%d",&n2);
	printf("Enter elements of second array :");
	for(i=0;i<n2;i++){
		scanf("%d",&array2[i]);
	}
/*	for(i=0;i<n+n2;i++){
		array3[i]=array1[i];
		array3[n+i]=array2[i];
		printf("%d %d",array3[i],array3[n+i]);
	}
/*	for(i=0;i<n+n2;i++){
		for(j=i+1;j<n+n2;j++){
			if(array3[i]>array3[j]){
				a=array3[i];
				array3[i]=array3[j];
				array3[j]=a;
			}
		}
	}

*/
	i=j=k=0;
	while(i<n+n2){
		if(array1[j]<array2[k]){
			array3[i]=array1[j];
			i++;
			j++;

		}
		else{
			array3[i]=array2[k];
			i++;
			k++;
		}

	}

	printf("Order of array is : ");
	for(i=0;i<n+n2;i++){
		printf("%d\n",array3[i]);
	}

	getch();


}