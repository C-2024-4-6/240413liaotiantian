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
		cout << "�޸�ǰ������Ϊ����" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		Point::x += i;
		Point::y += j;
	}
	void display()
	{
		cout << "�޸ĺ������ֵΪ��(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.setPoint(43, 76);
	p.display();
	return 0;
}