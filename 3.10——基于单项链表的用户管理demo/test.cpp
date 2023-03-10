#pragma once
#include"list.h"
#include<iostream>
using namespace std;
typedef struct user{
	char* name;
	int age;
	char* dept;
	user(char *name,int age,char *dept) {
		this->name = name;
		this->age = age;
		this->dept = dept;
	}
}Student,Teacher;

void print(void* data) {
	user* p = (user*)data;
	cout << "name:" << p->name << " " << "age:" << p->age << " " << "��ݣ�" << p->dept << endl;
}
int main() {
	Student s1 = { "xuxu", 18, "ѧ��" };
	Student s2("xuxu2", 20, "ѧ��");
	Teacher t1("teacher1", 30, "��ʦ");
	Teacher t2("teacher2", 30, "��ʦ");
	LinkList list;
	list.insert(&s1, list.getSize());
	list.insert(&s2, list.getSize());
	list.insert(&t1, list.getSize());
	list.insert(&t2, list.getSize());
	list.print(print);

	ListNode* p = list.findNode(1);
	user* u= (user*)(p->data);
	printf("%s\t%d\n", u->name, u->age);

	cout << "size:" << list.getSize() << endl;

	list.remove(3);
	list.print(print);
	cout << "size:" << list.getSize() << endl;
	return 0;
}