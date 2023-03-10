#pragma once
struct ListNode
{
	void* data;
	ListNode* next;
};

typedef void(*PRINT)(void* data);
class LinkList {
public:
	LinkList();
	~LinkList();
	void print(PRINT print);
	void insert(void* data, int pos);
	void remove(int pos);
	
	ListNode* findNode(int pos);
	
	int getSize();

private:
	ListNode* head;
	int size;
};