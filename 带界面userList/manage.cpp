
#include "manage.h"
#include <iostream>
using namespace std;



void Manage::showMenu()
{
	cout << "�û�����ϵͳ��" << endl;
	cout << "0.�˳�ϵͳ" << endl;
	cout << "1.�������" << endl;
	cout << "2.ɾ������" << endl;
	cout << "3.��ʾ����" << endl;
	cout << "4.��ѯ����" << endl;
	cout << "5.�޸�����" << endl;
	cout << "��ѡ��";
}


//�˳�ϵͳ
void Manage::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}

//���
void Manage::addUser()
{
	char name[20] = "xuxu";
	int age = 20;
	char dept[20] = "ѧ��";
	cout << "�������û�������";
	cin >> name;
	cout << endl << "�������û�����:";
	cin >> age;
	cout << endl << "�������û����:";
	cin >> dept;
	user u(name, age, dept);
	list.pushBack(&u);
	system("cls");
}


//ɾ���û�
void Manage::delUser() {
	char name[20];
	cout << "������Ҫɾ�����û�����" << endl;
	list.removeByName(name);
	cout << "ɾ���ɹ�" << endl;
	system("cls");
}



//��ʾ���ݣ���ӡ
void Manage::print() {
	/*void print(void* data) {
		user* p = (user*)data;
		cout << "name:" << p->name << " " << "age:" << p->age << " " << "��ݣ�" << p->dept << endl;
	}*/
	list.print();
}

//��ѯ����
void Manage::findUser() {
	char name[20];
	cout << "������Ҫ��ѯ���û�����" << endl;
	list.findByName(name);
	system("cls");
}

//�޸�����
void Manage::modifyUser() {
	//�Ȳ��ٸ�
}

//�û�����
void Manage::userSize() {
	int size = list.getSize();
	cout << "��ǰ�û���Ϊ��" << size << endl;
}