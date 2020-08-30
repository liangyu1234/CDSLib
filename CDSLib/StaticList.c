#define STATICLIST_PARA_GLOBAL

#include "StaticList.h"

static int StaticList_capacity() {
	return N;
}

T m_space[N];

SeqList * StaticList_Create() {
	StaticList staticList;

	staticList.seqList.m_array = m_space;
	staticList.seqList.m_length = 0;
	staticList.seqList.capacity = StaticList_capacity;

	staticList.seqList.list = SeqList_Create();

	return &staticList.seqList;
}