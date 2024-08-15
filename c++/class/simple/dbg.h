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
#define FUNC_TITLE(...) \
    do { \
		char __lineno__[32]={0}; \
		sprintf(__lineno__, "(%d)", __LINE__); \
		int __funclen__=(int)(strlen(__FUNCTION__)+strlen(__lineno__)); \
		int __barlen1__=(int)(strlen(FUNC_BAR)-__funclen__/2); \
		int __barlen2__=(int)(strlen(FUNC_BAR)-__funclen__/2-__funclen__%2); \
        printf("%.*s %s(%d) %.*s\n", __barlen1__, FUNC_BAR, __FUNCTION__, __LINE__, __barlen2__, FUNC_BAR); \
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
