#include<iostream>
using namespace std;
int main()
{
	float i = 0;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶Èi=" << endl;
	cin >> i;
	float j = (i - 32) * 5 / 9;
	cout << "ÉãÊÏÎÂ¶Èj=" << endl;
	printf("%.2f", j);
	return 0;
}