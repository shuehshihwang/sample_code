#include "binary_search.h"

int binary_search_real(int *a, int l, int r, int key){
	if(l<=r){
		int m=(l+r)/2; 
		if(a[m]<key){
			l=m+1; 
		}else if(a[m]>key){
			r=m-1; 
		}else{
			return m; 
		}
		return binary_search_real(a, l, r, key); 
	}
	// dbg("l[%d](%d) r[%d](%d) key(%d)", l, a[l], r, a[r], key); 
	if(abs(key-a[r])>abs(key-a[l])){
		return l; 
	}
	return r; 
}

int binary_search(int *a, int l, int r, int key){
	if(key<a[l]){
		return l; 
	}else if(key>a[r]){
		return r; 
	}else{
		return binary_search_real(a, l, r, key); 
	}
}

void binary_search_test(void){
	{
		int a[]={3,5,6,7,9,13,14,15,27,45,99}; 
		size_t n=sizeof(a)/sizeof(a[0]); 
		dump_array(a, n); 
		printf("binary_search(%d): a[%d]\n", 27, binary_search(a, 0, n-1, 27)); 
	}
	{
		int a[]={13,99}; 
		size_t n=sizeof(a)/sizeof(a[0]); 
		dump_array(a, n); 
		printf("binary_search(%d): a[%d]\n", 27, binary_search(a, 0, n-1, 27)); 
	}
	{
		int a[]={13,99}; 
		size_t n=sizeof(a)/sizeof(a[0]); 
		dump_array(a, n); 
		printf("binary_search(%d): a[%d]\n", 101, binary_search(a, 0, n-1, 101)); 
	}
	{
		int a[]={13,99}; 
		size_t n=sizeof(a)/sizeof(a[0]); 
		dump_array(a, n); 
		printf("binary_search(%d): a[%d]\n", 11, binary_search(a, 0, n-1, 11)); 
	}
}

