#pragma once
#include<string>
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num,const char * name,char sex);
private:
	int num;
	char name[20];
	char sex;
};