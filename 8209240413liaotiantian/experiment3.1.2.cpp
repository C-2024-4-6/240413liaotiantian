#include<iostream>
using namespace std;
int gys(int a, int b)
{
	if (a > b)
	{
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
	if (b > a)
	{
		while (a != 0)
		{
			int temp = a;
			a = b % a;
			b = temp;
		}
		return b;
	}
}
int gbs(int a, int b)
{
	int k = (a / gys(a, b)) * (b / gys(a, b)) * gys(a, b);
	return k;
}
int main()
{
	int m;
	int n;
	cout << "������������m,n:" << endl;
	cin >> m;
	cin >> n;
	if (m == 0 || n == 0)
	{
		cout << "m��n�����Լ������С����������������ȷ����ֵ��" << endl;
	}
	if (m != 0 && n != 0)
	{
		int j = gys(m, n);
		int k = gbs(m, n);
		cout << "m��n�����Լ��Ϊ��" << j << endl;
		cout << "m��n����С������Ϊ��" << k << endl;
	}
}