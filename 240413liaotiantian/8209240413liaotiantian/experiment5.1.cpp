#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:        // ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cout << "�������趨��ʱ�䣺" << endl;
		cin >> Time::hour;      //�����趨��ʱ�� 
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