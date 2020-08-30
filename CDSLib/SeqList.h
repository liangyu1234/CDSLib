#ifndef SEQLIST_H
#define SEQLIST_H
#include "list.h"

#ifdef SEQLIST_PARA_GLOBAL
#define EXTERN_SEQLIST_PARA_GLOBAL
#else
#define EXTERN_SEQLIST_PARA_GLOBAL     extern
#endif

typedef struct _SeqList SeqList;
typedef struct _SeqList {
	List *list;
	T* m_array;
	int m_length;
	int (* capacity)();
};

List* SeqList_Create();

#endif // SEQLIST_H
