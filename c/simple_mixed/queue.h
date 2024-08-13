#ifndef __queue_h__
#define __queue_h__

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct queue queue; 

struct queue {
	char *buf; 
	char *top; 
	char *bottom; 
	size_t cap;
	size_t size; 
}; 

queue* init(void); 
queue* push(queue *q, char c); 
queue* pop(queue *q); 
char head(queue *q); 
char tail(queue *q); 
queue* dump(queue *q); 

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
