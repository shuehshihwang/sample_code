#ifndef __dbg_h__
#define __dbg_h__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define __file__ strrchr(__FILE__, '/')?strrchr(__FILE__, '/')+1:__FILE__
#define dbg(fmt, ...) do{\
	fprintf(stdout, "%s(%d)@%s: " fmt "\n", __FUNCTION__, __LINE__, __file__, ## __VA_ARGS__); \
}while(0); 
#define dbge(fmt, ...) do{\
	fprintf(stderr, "%s(%d)@%s: " fmt "\n", __FUNCTION__, __LINE__, __file__, ## __VA_ARGS__); \
}while(0); 
#ifdef __cplusplus
extern "C"
{
#endif
#define FUNC_BAR "=================================="
#define FUNC_TITLE \
    do { \
        printf("%.*s %s %.*s\n", (int)(strlen(FUNC_BAR)-strlen(__FUNCTION__)/2), FUNC_BAR, __FUNCTION__, (int)(strlen(FUNC_BAR)-strlen(__FUNCTION__)/2-strlen(__FUNCTION__)%2), FUNC_BAR); \
    } while(0); 
#ifdef __cplusplus
} /* extern "C" */
#endif
#ifdef __cplusplus
extern "C"
{
#endif
void dbg_test(void);
#ifdef __cplusplus
} /* extern "C" */
#endif
#endif
