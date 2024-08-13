#ifndef __binary_search_h__
#define  __binary_search_h__

#include "dbg.h"
#include "array.h"

#ifdef __cplusplus
extern "C"
{
#endif

int binary_search_real(int *a, int l, int r, int key); 
int binary_search(int *a, int l, int r, int key); 
void binary_search_test(void); 

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
