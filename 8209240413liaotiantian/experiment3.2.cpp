#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 1 || num == 2)
	{
		return true;
	}
	else
	{
		int i = 2;
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
}
int main()
{
	int j = 0;
	int a = 1;
	for (a = 1;j<200; a++)
	{
		if (is_prime(a))
		{
			cout << a <<" ";
			j++;
			if (j % 10 == 0)
			{
				cout << endl;
			}
		}
	}
}