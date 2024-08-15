#include <iostream>
#include "dbg.h"
using namespace std; 
class node {
private: 
	int _x=-3; 
	int _y=3; 
public: 
	node(void){
		FUNC_TITLE(); 
	}
	node(int x, int y){
		FUNC_TITLE(); 
		_x=x; 
		_y=y; 
	}
	~node(void){
		FUNC_TITLE(); 
	}
	void info(void){
		FUNC_TITLE(); 
		dbg("_x(%d) _y(%d)", _x, _y); 
	}
}; 
void test_func_title(); 
int main(int argc, char *argv[]){
    FUNC_TITLE(); 
	{
		dbg(); 
		node t1(1, 1); 
		t1.info(); 
		dbg(); 
		node *t2=new node(); 
		t2->info(); 
		delete t2; 
		test_func_title(); 
	}
    exit(EXIT_SUCCESS);
}





























































void test_func_title(void){
	FUNC_TITLE(); 
}
