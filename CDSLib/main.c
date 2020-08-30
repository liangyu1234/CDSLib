#include <stdio.h>
#include "StaticList.h"

int main(){
	printf("hello world\n");
	SeqList* pSeqList = StaticList_Create();


	int w = 0;

	pSeqList->list->insert(pSeqList, 0);
	pSeqList->list->insert(pSeqList, 1);
	pSeqList->list->insert(pSeqList, 2);
	pSeqList->list->insert(pSeqList, 3);
	pSeqList->list->insert(pSeqList, 4);
	pSeqList->list->insert(pSeqList, 5);
	pSeqList->list->get(pSeqList, 3, &w);
	printf("3=%d\n", w);

	return 0;
}


