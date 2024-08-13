#include "array.h"

void dump_array(int *a, int n){
	printf("a[%d]: ", n); 
	for(int i=0; i<n; i++){
		printf("%d%s", a[i], i!=n-1?",":""); 
	}
	printf("\n"); 
}

void dump_array2(int **a, int r, int c){
	int (*pa)[c]=(int (*)[c])a; 
	printf("a[%d][%d]: {", r, c); 
	for(int i=0; i<r; i++){
		printf("{"); 
		for(int j=0; j<c; j++){
			printf("%d%s", pa[i][j], j!=c-1?",":""); 
		}
		printf("}%s", i!=r-1?",":""); 
	}
	printf("}\n"); 
}

