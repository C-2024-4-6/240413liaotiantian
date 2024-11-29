#include<iostream>
using namespace std;
int main()
{
	int sz[10];
	int gs = 0;
	cout << "Enter ten numbers : " << endl;
	for (int i = 0; i < 10; i++)
	{
		int number;
		cin >> number;
		bool different = true;
		for (int j = 0; j < gs; j++)
		{
			if (sz[j] == number)
			{
				different = false;
				break;
			}
		}
		if (different)
		{
			sz[gs++] = number;
		}
	}
	cout << "The distinct numbers are: ";
	for (int x = 0; x < gs; x++)
	{
		cout << sz[x] << " ";
	}
	return 0;
}