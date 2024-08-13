#include "queue.h"

queue* init(void){
	queue *q=(queue *)malloc(sizeof(queue));  
	if(q){
		q->cap=2; 
		q->buf=(char *)malloc(sizeof(char)*q->cap); 
		q->top=q->buf; 
		q->bottom=q->buf; 
		q->size=0; 
	}
	return q; 
}

queue* push(queue *q, char c){
	if(q){
		if(q->bottom<(q->buf+q->cap)){
			q->buf[q->size++]=c; 
			q->bottom++; 
		}else{
			printf("q over cap!!\n"); 
			char *buf_bkp=q->buf; 
			q->buf=(char *)realloc(q->buf, sizeof(char)*(q->cap*2)); 
			if(q->buf){
				if(q->top!=q->buf){
					printf("q re-arranged!!\n"); 
					for(size_t i=0; i<q->size; i++){
						q->buf[i]=q->top[i]; 
					}
					q->top=q->buf; 
				}
				q->cap*=2; 
				push(q, c); 
			}else{
				q->buf=buf_bkp; 
				printf("realloc failed!!\n"); 
			}
		}
	}
	return q; 
}

queue* pop(queue *q){
	if(q){
		if(q->size>0){
			q->top++; 
			q->size--; 
		}
	}
	return q; 
}

char head(queue *q){
	if(q){
		return q->size>0?*q->top:'\0'; 
	}
	return '\0'; 
}

char tail(queue *q){
	if(q){
		return q->size>0?q->top[q->size-1]:'\0'; 
	}
	return '\0'; 
}

queue* dump(queue *q){
	if(q){
		printf("q(size(%lu) cap(%lu)): ", q->size, q->cap); 
		for(size_t i=0; i<q->size; i++){
			printf("%c%s", q->top[i], i!=q->size-1?", ":""); 
		}
		printf("\n"); 
		printf("head('%c') tail('%c')\n", head(q), tail(q)); 
	}
	return q; 
}

