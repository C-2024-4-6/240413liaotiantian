//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include<string>
#include"student.h"   //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int num,const char * name,char sex)
{
    Student::num = num;
    strcpy_s(Student::name, name);
    Student::sex = sex;
}