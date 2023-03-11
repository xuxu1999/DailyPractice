
#include "manage.h"
#include <iostream>
using namespace std;



void Manage::showMenu()
{
	cout << "用户管理系统：" << endl;
	cout << "0.退出系统" << endl;
	cout << "1.添加数据" << endl;
	cout << "2.删除数据" << endl;
	cout << "3.显示数据" << endl;
	cout << "4.查询数据" << endl;
	cout << "5.修改数据" << endl;
	cout << "请选择：";
}


//退出系统
void Manage::exitSystem() {
	cout << "欢迎下次使用" << endl;
	exit(0);
}

//添加
void Manage::addUser()
{
	char name[20] = "xuxu";
	int age = 20;
	char dept[20] = "学生";
	cout << "请输入用户姓名：";
	cin >> name;
	cout << endl << "请输入用户年龄:";
	cin >> age;
	cout << endl << "请输入用户身份:";
	cin >> dept;
	user u(name, age, dept);
	list.pushBack(&u);
	system("cls");
}


//删除用户
void Manage::delUser() {
	char name[20];
	cout << "请输入要删除的用户姓名" << endl;
	list.removeByName(name);
	cout << "删除成功" << endl;
	system("cls");
}



//显示数据，打印
void Manage::print() {
	/*void print(void* data) {
		user* p = (user*)data;
		cout << "name:" << p->name << " " << "age:" << p->age << " " << "身份：" << p->dept << endl;
	}*/
	list.print();
}

//查询数据
void Manage::findUser() {
	char name[20];
	cout << "请输入要查询的用户姓名" << endl;
	list.findByName(name);
	system("cls");
}

//修改数据
void Manage::modifyUser() {
	//先查再改
}

//用户数量
void Manage::userSize() {
	int size = list.getSize();
	cout << "当前用户数为：" << size << endl;
}