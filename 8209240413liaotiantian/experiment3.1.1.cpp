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
int main()
{
	int m;
	int n;
	cout << "请输入两个数m,n:" << endl;
	cin >> m;
	cin >> n;
	if (m == 0 || n == 0)
	{
		cout << "m和n无最大公约数，请输入正确的数值！" << endl;
	}
	if (m != 0 && n != 0)
	{
		int j = gys(m, n);
		cout << "m和n的最大公约数为：" << j << endl;
	}
}