#include<iostream>
using namespace std;
int gs(int day)
{
	if (day == 10)
	{
		return 1;
	}
	else
	{
		return (gs(day + 1) + 1) * 2;
	}
}
int main()
{
	cout << "��һ����ӹ�ժ����" << gs(1) << "��" << endl;
}