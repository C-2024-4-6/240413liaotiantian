#include<iostream>
using namespace std;
int main()
{
	float i = 0;
	cout << "�����뻪���¶�i=" << endl;
	cin >> i;
	float j = (i - 32) * 5 / 9;
	cout << "�����¶�j=" << endl;
	printf("%.2f", j);
	return 0;
}