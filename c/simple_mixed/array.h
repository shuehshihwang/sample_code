#ifndef __array_h__
#define __array_h__
#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif

void dump_array(int *a, int n); 
void dump_array2(int **a, int r, int c); 

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
