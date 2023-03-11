#pragma once
#include"list.h"
class Manage {

public:

	//展示菜单
	void showMenu();

	//退出系统
	void exitSystem();

	//添加user用户
	void addUser();

	//删除用户
	void delUser();

	//显示数据，打印
	void print();

	//查询数据
	void findUser();

	//修改数据
	void modifyUser();

	//用户数量
	void userSize();

private:
	LinkList list;
};