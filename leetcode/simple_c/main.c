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
void case001(void){}
void case002(void){}
void case003(void){}
void case004(void){}
void case005(void){}
int main(int argc, char *argv[]){
    FUNC_TITLE; 
	{
		dbg(); 
		case001(); 
		case002(); 
		case003(); 
		case004(); 
		case005(); 
	}
    exit(EXIT_SUCCESS);
}

