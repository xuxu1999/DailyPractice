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
//	cout << "name:" << p->name << " " << "age:" << p->age << " " << "��ݣ�" << p->dept << endl;
//}
//void test() {
//	Student s1 = { "xuxu1", 18, "ѧ��" };
//	Student s2("xuxu2", 20, "ѧ��");
//	Student s3("xuxu3", 20, "ѧ��");
//	Teacher t1("teacher1", 30, "��ʦ");
//	Teacher t2("teacher2", 30, "��ʦ");
//	Teacher t3("teacher3", 40, "��ʦ");
//	LinkList list;
//	list.insert(&s1, list.getSize());
//	list.insert(&s2, list.getSize());
//	list.insert(&s3, list.getSize());
//	list.insert(&t1, list.getSize());
//	list.insert(&t2, list.getSize());
//	//β��
//	Teacher t4("teacher4", 50, "��ʦ");
//	//ָ��λ�ò���
//	Student s4("xuxu4", 18, "ѧ��");
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
//	cout << "��������xuxu2���ң�" << xuxu->name << endl;
//	cout << "----------------" << endl;
//	//list.print(print);
//	cout << "----------------" << endl;
//	//��������ɾ
//	cout << "--------------------------" << list.removeByName("xuxu3") << endl;
//
//
//	//list.print(print);
//}

user* InputData() {
	char name[50];
	int age;
	char dept[50];
	cout << "�������û�����:";
	cin >> name;
	fflush(stdin);
	cout << endl << "�������û����䣺";
	cin >> age;
	fflush(stdin);
	cout << endl << "�������û���ݣ�";
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
		case 0://�˳�ϵͳ
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