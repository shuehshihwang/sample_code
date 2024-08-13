#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <net/if.h>

#include "dbg.h"

void dump_2d_static_array(int **arr, int r, int c){
	int (*p)[r][c]=(int(*)[r][c])arr; 
	printf("["); 
	for(int i=0; i<r; i++){
		printf("["); 
		for(int j=0; j<c; j++){
			printf("%d%s", (*p)[i][j], j!=c-1?",":""); 
		}
		printf("]%s", i!=(r-1)?",":""); 
	}
	printf("]\n"); 
}

void dump_array(int *arr, int n){
	dump_2d_static_array((int **)arr, 1, n); 
}

int main(int argc, char *argv[]){
    FUNC_TITLE; 
	{
		dbg(); 
		int a1[5][2]={
			{1, 2},
			{3, 4},
			{5, 6},
			{7, 8},
			{9, 0}
		}; 
		int a2[]={9, 7, 3, 2, 1, 5, 6, 8, 4}; 
		void d(int **a, int r, int c){
			dbg("r(%d), c(%d)", r, c); 
			int (*p)[r][c]=(int(*)[r][c])a; 
			dbg("p[%d][%d]: %d", 2, 1, (*p)[2][1]); 
			printf("["); 
			for(int i=0; i<r; i++){
				printf("["); 
				for(int j=0; j<c; j++){
					printf("%d%s", (*p)[i][j], j!=c-1?",":""); 
				}
				printf("]%s", i!=(r-1)?",":""); 
			}
			printf("]\n"); 
		}
		dump_2d_static_array((int **)a1, sizeof(a1)/sizeof(a1[0]), sizeof(a1[0])/sizeof(a1[0][0])); 
		dump_array(a2, sizeof(a2)/sizeof(a2[0])); 
	}
    exit(EXIT_SUCCESS);
}

