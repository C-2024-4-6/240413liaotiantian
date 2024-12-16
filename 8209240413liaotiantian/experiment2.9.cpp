#include<iostream>
using namespace std;
int main()
{
	float i = 0.8;
	int day = 0;
	float zfy = 0;
	for (int j = 2; j <= 100; j = 2 * j)
	{
		day++;
		zfy += (j * i);
	}
	cout << "每天平均花" << zfy / day << "元" << endl;
}