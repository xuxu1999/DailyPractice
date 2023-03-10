#pragma once
#include"list.h"
#include<iostream>
using namespace std;

LinkList::LinkList() {
	 head = new ListNode();
	 head->data = NULL;
	 head->next = nullptr;
	 size = 0;
}

LinkList::~LinkList() {
	if (size == 0) {
		delete head;
		head = nullptr;
		return;
	}
	ListNode* p = head->next;
	delete head;
	while (p != nullptr) {
		ListNode* tempptr = p->next;
		delete p;
		p = tempptr;
	}
	size = 0;
}

void LinkList::print(PRINT print) {
	if (size == 0)	return;
	cout << "当前list：" << endl;
	ListNode* temp = head->next;
	for (int  i = 0; i < size; i++)
	{
		print(temp->data);//用户自定义打印函数
		temp = temp->next;
	}
	cout << endl << endl;
}


ListNode* LinkList::findNode(int pos) {

	if (pos<0 || pos>size)return NULL;

	ListNode* temp = new ListNode();
	temp = head;
	while (pos--) {
		temp = temp->next;
	}

	return temp;

}

void LinkList::insert(void* data, int pos) {
	if (data == NULL)return;
	if (pos<0 || pos>size) {
		pos = size;
	}
	ListNode* pre = findNode(pos);//插入节点的前一个
	ListNode* cur = new ListNode();


	cur->data = data;
	cur->next = pre->next;
	pre->next = cur;
	
	
	size++;

}


int LinkList::getSize() {
	return size;
}

void LinkList::remove (int pos) {

	if (pos<0 || pos>size) return;

	ListNode* pre = findNode(pos - 1);
	ListNode* cur = pre->next;

	pre->next = cur->next;
	delete cur;
	pre = nullptr;
	cur = nullptr;
	size--;
	


}