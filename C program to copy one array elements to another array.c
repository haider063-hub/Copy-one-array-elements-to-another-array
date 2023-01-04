////CODED BY: Muhammad Haider
////Write a C program to copy one array elements to another array (using pointers)
#include<stdio.h>
int main() {
	printf("C program to copy one array elements to another array (using pointers)\n");
	printf("________________________________________________________________________\n");
	int ar[4] ;
	int i ;
	int *p = ar ;
	for( i = 0; i < 4; i++) {
		printf("\nEnter the %d element of array1: ", i+1);
		scanf("%d",(p+i)) ;
	}

	int ar2[4] ;
	int *p2 = ar2 ;
	for( i = 0; i < 4; i++) {
		*(p2+i) = *(p+i) ;
	}
	printf("\n_______________________________________________________________________\n");
	printf("\nElements of Array2: ");
	for(i = 0; i < 4 ; i++) {
		printf("%d ", *(p+i)) ;
	}
}















