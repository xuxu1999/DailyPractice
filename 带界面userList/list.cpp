#pragma once
#include"list.h"
#include<iostream>
#include<string>
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

//void LinkList::print(PRINT print) {
//	if (size == 0)	return;
//	cout << "当前list：" << endl;
//	ListNode* temp = head->next;
//	for (int i = 0; i < size; i++)
//	{
//		print(temp->data);//用户自定义打印函数
//		temp = temp->next;
//	}
//	cout << endl << endl;
//}
void LinkList::print() {
	if (size == 0)	return;
	cout << "当前list：" << endl;
	ListNode* temp = head->next;
	for (int i = 0; i < size; i++)
	{
		user* u = (user*)(temp->data);
		//print(temp->data);//用户自定义打印函数
		cout << "name: " << u->name << " age: " << u->age << " 身份：" << u->dept << endl;
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

void LinkList::pushBack(void* data)
{
	ListNode* cur = new ListNode();
	cur->data = data;
	cur->next = nullptr;

	ListNode* temp = findNode(size);
	temp->next = cur;
	size++;
}


int LinkList::getSize() {
	return this->size;
}

void LinkList::remove(int pos) {

	if (pos<0 || pos>size) return;

	ListNode* pre = findNode(pos - 1);
	ListNode* cur = pre->next;

	pre->next = cur->next;
	delete cur;
	pre = nullptr;
	cur = nullptr;
	size--;



}

int LinkList::removeByName(char* name)
{
	if (name != NULL) {
		ListNode* p = head->next;
		int n = 0;
		for (int i = 1; i < this->getSize(); i++) {
			user* u = (user*)p->data;
			if (strcmp(u->name, name) == 0) {
				remove(i);
				size--;
				n = i;
				return n;
			}
			p = p->next;
			//user * pUser =(user*)p->data;
			//cout << pUser->name << pUser->age << pUser->dept << endl;
		}
		//cout << "size----------" << getSize() << endl;


		/*ListNode* temp = new ListNode();
		for (int i = 0; i < getSize(); i++) {
			temp = findNode(i);
			p=p->next;
			user* pUserData = (user*)temp->data;
			if (strcmp(pUserData->name, name)==0) {
				remove(i);
				return;
			}
		}*/
	}
}

void* LinkList::find(int pos) {

	if (pos<0 || pos >size) return NULL;
	ListNode* p = new ListNode();
	p = this->findNode(pos);
	return p->data;
}

user* LinkList::findByName(char* name)
{
	for (int i = 1; i < getSize(); i++) {
		user* data = (user*)find(i);
		if (strcmp(data->name, name) == 0) { return data; }
	}

	return nullptr;
}
