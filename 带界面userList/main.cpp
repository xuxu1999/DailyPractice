#pragma once
#include"list.h"
#include "manage.h"
#include<iostream>
using namespace std;
//typedef struct user{
//	char* name;
//	int age;
//	char* dept;
//	user(char *name,int age,char *dept) {
//		this->name = name;
//		this->age = age;
//		this->dept = dept;
//	}
//}Student,Teacher;

//void print(void* data) {
//	user* p = (user*)data;
//	cout << "name:" << p->name << " " << "age:" << p->age << " " << "身份：" << p->dept << endl;
//}
//void test() {
//	Student s1 = { "xuxu1", 18, "学生" };
//	Student s2("xuxu2", 20, "学生");
//	Student s3("xuxu3", 20, "学生");
//	Teacher t1("teacher1", 30, "老师");
//	Teacher t2("teacher2", 30, "老师");
//	Teacher t3("teacher3", 40, "老师");
//	LinkList list;
//	list.insert(&s1, list.getSize());
//	list.insert(&s2, list.getSize());
//	list.insert(&s3, list.getSize());
//	list.insert(&t1, list.getSize());
//	list.insert(&t2, list.getSize());
//	//尾插
//	Teacher t4("teacher4", 50, "老师");
//	//指定位置插入
//	Student s4("xuxu4", 18, "学生");
//	list.insert(&s4, 2);
//	list.pushBack(&t3);
//	list.pushBack(&t4);
//	//list.print(print);
//
//	/*ListNode* p = list.findNode(1);
//	user* u= (user*)(p->data);*/
//	//printf("%s\t%d\n", u->name, u->age);
//	user* u = (user*)list.find(3);
//	printf("%s\t%d\n", u->name, u->age);
//	cout << "size:" << list.getSize() << endl;
//
//	list.remove(3);
//	//list.print(print);
//	cout << "size:" << list.getSize() << endl;
//
//	cout << "----------------" << endl;
//	user* xuxu = list.findByName("xuxu2");
//	cout << "根据姓名xuxu2查找：" << xuxu->name << endl;
//	cout << "----------------" << endl;
//	//list.print(print);
//	cout << "----------------" << endl;
//	//根据姓名删
//	cout << "--------------------------" << list.removeByName("xuxu3") << endl;
//
//
//	//list.print(print);
//}

user* InputData() {
	char name[50];
	int age;
	char dept[50];
	cout << "请输入用户姓名:";
	cin >> name;
	fflush(stdin);
	cout << endl << "请输入用户年龄：";
	cin >> age;
	fflush(stdin);
	cout << endl << "请输入用户身份：";
	cin >> dept;
	fflush(stdin);
	user* PUeser = new user(name, age, dept);
	return PUeser;
}
int main() {

	Manage m;
	int select = 0;
	while (true)
	{
		m.showMenu();
		cin >> select;
		switch (select)
		{
		case 0://退出系统
			m.exitSystem();
			break;
		case 1:
			m.addUser();
			break;

		case 3:
			m.print();
		default:
			break;
		}
	}
	return 0;
}