#define DYNAMICLIST_PARA_GLOBAL

#include "DynamicList.h"

static int m_capacity;

static int DynamicList_capacity() {
	return m_capacity;
}

void DynamicList_resize(DynamicList* this, int capacity) {
	if (capacity != m_capacity) {
		T* array = (T*)malloc(sizeof(T)* capacity);
		if (array != NULL) {
			int length = (this->seqList.m_length < capacity ? this->seqList.m_length : capacity);
			for (int i = 0; i < length; i++) {
				array[i] = this->seqList.m_array[i];
			}
			T* temp = this->seqList.m_array;
			this->seqList.m_array = array;
			m_capacity = capacity;
			free(temp);
		}
		else {
			printf("No memory to resize DynamicList obj...\n");
		}
	}
}

SeqList* DynamicList_Create(int capacity) {
	DynamicList* pDynamicList = (DynamicList*)malloc(sizeof(DynamicList));
	
	if (pDynamicList != NULL) {
		pDynamicList->seqList.m_array = (T*)malloc(sizeof(T) * capacity);
		pDynamicList->seqList.m_length = 0;
		m_capacity = capacity;
		pDynamicList->seqList.list = SeqList_Create();
		pDynamicList->resize = DynamicList_resize;
	}
	else {
		printf("No memory to create DynamicList obj...\n");
	}
}

void DynamicList_Destroy(DynamicList* this) {
	if (this != NULL) {
		free(this->seqList.m_array);
	}
	free(this);
}