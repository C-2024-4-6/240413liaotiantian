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
		cout << "请输入长方体的长宽高：" << endl;
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
		cout << "长方体的体积为：" << v << endl;
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