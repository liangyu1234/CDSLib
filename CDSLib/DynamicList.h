#ifndef DYNAMICLIST_H
#define DYNAMICLIST_H
#include "Seqlist.h"

#ifdef DYNAMICLIST_PARA_GLOBAL
#define EXTERN_DYNAMICLIST_PARA_GLOBAL
#else
#define EXTERN_DYNAMICLIST_PARA_GLOBAL     extern
#endif

typedef struct _DynamicList DynamicList;
typedef struct _DynamicList {
	SeqList seqList;
	//int m_capacity;
	void (*resize)(DynamicList * this, int capacity);
};

#endif // DYNAMICLIST_H

