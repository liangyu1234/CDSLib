#ifndef STATICLIST_H
#define STATICLIST_H
#include "Seqlist.h"

#ifdef STATICLIST_PARA_GLOBAL
#define EXTERN_STATICLIST_PARA_GLOBAL
#else
#define EXTERN_STATICLIST_PARA_GLOBAL     extern
#endif

#define N 20
typedef struct _StaticList StaticList;
typedef struct _StaticList {
	SeqList seqList;
	//T m_space[N];
};

SeqList* StaticList_Create();

#endif // STATICLIST_H
