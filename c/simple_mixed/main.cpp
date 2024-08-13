#include <iostream>
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
#include "sample.h"
#include "queue.h"

using namespace std; 

#ifdef __cplusplus
extern "C"
{
#endif
int c_main(int argc, char *argv[]);
#ifdef __cplusplus
} /* extern "C" */
#endif

int cpp_main(int argc, char **argv);


int main(int argc, char *argv[]){
    FUNC_TITLE; 
	{
		dbg(); 
	}
    exit(EXIT_SUCCESS);
}


