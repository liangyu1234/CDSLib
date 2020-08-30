#ifndef LIST_H
#define LIST_H
//#include "object.h"
#include "CDSLib_config.h"
#include <stdbool.h>

#ifdef LIST_PARA_GLOBAL
#define EXTERN_LIST_PARA_GLOBAL
#else
#define EXTERN_LIST_PARA_GLOBAL     extern
#endif


typedef struct _List List;
typedef struct _List {
	
	bool (* insert)(void * this, const T e);
	bool (* insert_i)(void* this, int i, const T e);
	bool (* remove)(void* this, int i);
	bool (* set)(void* this, int i, const T e);
	bool (* get)(void* this, int i, T* e);
	int (* find)(void* this, const T e);
	int (* length)(void* this);
	void (* clear)(void* this);
};


#endif // LIST_H
