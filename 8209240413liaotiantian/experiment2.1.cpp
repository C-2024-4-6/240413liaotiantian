#include<iostream>
using namespace std;
int main()
{
	char i = 0;
	cout << "������һ���ַ�i=" << endl;
	cin >> i;
	if ('a' <= i&&i<= 'z') 
	{
		i = i - 32;
		cout <<(char)i << endl;
	}
	else
	{
		cout << i - 0 << endl;
	}
	return 0;
}