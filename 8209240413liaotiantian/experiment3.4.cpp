#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1;
	double side2;
	double side3;
	cout << "�����������ε������ߣ�" << endl;
	cin >> side1;
	cin >> side2;
	cin >> side3;
	if (is_valid(side1, side2, side3))
	{
		double mj = _area(side1, side2, side3);
		cout << "�������ܹ��������Σ������ε����Ϊ��" << mj << endl;
	}
	else
	{
		cout << "�����߲��ܹ��������Σ���������ȷ�ı߳���" << endl;
	}
	return 0;
}