#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε������߳�a,b,c" << endl;
	cin >> a >> b >> c;
	if (a + b > c &&a + c>b&&b + c>a&&a-b<c&&b-a<c&&a-c<b&&c-a<b&&b-c<a&&c-b<a)
	{
		cout << "�����ε��ܳ�Ϊ��" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ���������Ρ�" << endl;
		}
	}
	else
	{
		cout << "���߲��ɹ��������Σ���������ȷ�ı߳���" << endl;
	}
	return 0;
}