#pragma once
typedef struct user {
	char* name;
	int age;
	char* dept;
	user(char* name, int age, char* dept) {
		this->name = name;
		this->age = age;
		this->dept = dept;
	}
}Student, Teacher;

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
	//void print(PRINT print);
	void print();
	void insert(void* data, int pos);
	void pushBack(void* data);
	void remove(int pos);
	int removeByName(char* name);
	void* find(int pos);
	user* findByName(char* name);

	int getSize();




private:
	ListNode* findNode(int pos);
	ListNode* head;
	int size;
};