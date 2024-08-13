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
#include "system.h"

int main(int argc, char *argv[]){
    FUNC_TITLE; 
	{
		dbg(); 
		SYSTEM("echo %s, %d", __FUNCTION__, __LINE__); 
	}
    exit(EXIT_SUCCESS);
}

