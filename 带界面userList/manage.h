#pragma once
#include"list.h"
class Manage {

public:

	//չʾ�˵�
	void showMenu();

	//�˳�ϵͳ
	void exitSystem();

	//���user�û�
	void addUser();

	//ɾ���û�
	void delUser();

	//��ʾ���ݣ���ӡ
	void print();

	//��ѯ����
	void findUser();

	//�޸�����
	void modifyUser();

	//�û�����
	void userSize();

private:
	LinkList list;
};