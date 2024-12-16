#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1;
	double side2;
	double side3;
	cout << "请输入三角形的三条边：" << endl;
	cin >> side1;
	cin >> side2;
	cin >> side3;
	if (is_valid(side1, side2, side3))
	{
		double mj = _area(side1, side2, side3);
		cout << "此三边能构成三角形，三角形的面积为：" << mj << endl;
	}
	else
	{
		cout << "此三边不能构成三角形，请输入正确的边长。" << endl;
	}
	return 0;
}