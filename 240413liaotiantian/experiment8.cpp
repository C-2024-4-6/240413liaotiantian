#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边长a,b,c" << endl;
	cin >> a >> b >> c;
	if (a + b > c &&a + c>b&&b + c>a&&a-b<c&&b-a<c&&a-c<b&&c-a<b&&b-c<a&&c-b<a)
	{
		cout << "三角形的周长为：" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形。" << endl;
		}
	}
	else
	{
		cout << "三边不可构成三角形，请输入正确的边长！" << endl;
	}
	return 0;
}