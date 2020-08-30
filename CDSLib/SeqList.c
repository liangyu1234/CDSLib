#define SEQLIST_PARA_GLOBAL

#include "SeqList.h"

static bool SeqList_insert(SeqList *this, const T e) {
	//ASSERT(this);
	return this->list->insert_i(this,this->m_length,e);
}

static bool SeqList_insert_i(SeqList* this, int i, const T e) {
	//ASSERT(this);
	bool ret = ((0 <= i) && (i <= this->m_length));
	ret = ret && (this->m_length < this->capacity());
	if (ret) {
		int p = 0;
		for (p = this->m_length - 1; p >= i; p--) {
			this->m_array[p + 1] = this->m_array[p];
		}

		this->m_array[i] = e;

		this->m_length++;
	}
	return ret;
}

static bool SeqList_remove(SeqList* this, int i) {
	bool ret = ((0 <= i) && (i <= this->m_length));
	if (ret) {
		int p = 0;
		for (p = i; p < this->m_length - 1; p++) {
			this->m_array[p] = this->m_array[p + 1];
		}
		this->m_length--;
	}
	return ret;
}

static bool SeqList_set(SeqList* this, int i, const T e) {
	bool ret = ((0 <= i) && (i <= this->m_length));
	if (ret) {
		this->m_array[i] = e;
	}
	return ret;
}

static bool SeqList_get(SeqList* this, int i, T * e) {
	bool ret = ((0 <= i) && (i <= this->m_length));
	if (ret) {
		*e = this->m_array[i];
	}
	return ret;
}

static int SeqList_find(SeqList* this, const T e) {
	int ret = -1;
	for (int i = 0; i < this->m_length; i++) {
		if (this->m_array[i] == e) {
			ret = i;
			break;
		}
	}
	return ret;
}

static int SeqList_length(SeqList* this) {
	return this->m_length;
}

static void SeqList_clear(SeqList* this) {
	this->m_length = 0;
}

static List list = {
	.insert   = SeqList_insert,
	.insert_i = SeqList_insert_i,
	.remove   = SeqList_remove,
	.set      = SeqList_set,
	.get      = SeqList_get,
	.find     = SeqList_find,
	.length   = SeqList_length,
	.clear    = SeqList_clear,
};

List *SeqList_Create() {
	return &list;
}