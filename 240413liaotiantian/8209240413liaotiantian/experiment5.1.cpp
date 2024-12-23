#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:        // 数据成员为私有的
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cout << "请输入设定的时间：" << endl;
		cin >> Time::hour;      //输入设定的时间 
		cin >> Time::minute;
		cin >> Time::sec;
	}
	void showtime()
	{
		cout << Time::hour << ":" << Time::minute << ":" << Time::sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;
}