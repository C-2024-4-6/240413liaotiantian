#include <iostream>
using namespace std;
int main()
{
	bool arr[100] = { false };
	for (int S = 1; S <= 100; S++)
	{
		for (int L= S - 1;L < 100;L += S)
		{
			arr[L] = !arr[L];
		}
	}
	cout << "���ŵĴ�������Ϊ��";
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}