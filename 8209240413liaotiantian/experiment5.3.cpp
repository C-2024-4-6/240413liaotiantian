#include<iostream>
using namespace std;
class cuboid
{
public:
	double length;
	double width;
	double height;
	void set()
	{
		cout << "�����볤����ĳ���ߣ�" << endl;
		cin >> cuboid::length;
		cin >> cuboid::width;
		cin >> cuboid::height;
	}
	double volume()
	{
		double v = length * width * height;
		return v;
	}
	void show()
	{
		double v = volume();
		cout << "����������Ϊ��" << v << endl;
	}
};
int main()
{
	cuboid c1;
	cuboid c2;
	cuboid c3;
	c1.set();
	c1.volume();
	c1.show();
	c2.set();
	c2.volume();
	c2.show();
	c3.set();
	c3.volume();
	c3.show();
}