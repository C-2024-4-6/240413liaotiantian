#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x,int y)
	{
		Point::x = x;
		Point::y = y;
		cout << "修改前的坐标为：（" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		Point::x += i;
		Point::y += j;
	}
	void display()
	{
		cout << "修改后的坐标值为：(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.setPoint(43, 76);
	p.display();
	return 0;
}