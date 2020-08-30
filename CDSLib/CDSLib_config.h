#ifndef CDSLIB_CONFIG_H
#define CDSLIB_CONFIG_H

#include <stdio.h>
typedef unsigned int T;

//#define NULL 0
//这个可以到时换一下
#if 0
void Assert(char* filename, unsigned int lineno)
{
	printf("\nAssert failed： %s, line %u\n", filename, lineno);
}
#endif
#if 0
#define ASSERT(condition)                       \
            do{                                 \
               if(condition)                    \
               else                             \
                    Assert(__FILE__ , __LINE__);\
            }while(0)
#else
//#define ASSERT(condition) 
#endif

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - (unsigned long)(&((type *)0)->member)))



#endif // CDSLIB_CONFIG_H
