#include<iostream>
using namespace std;
void mp(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int len;
	cout << "请输入数组元素个数：";
	cin >> len;
	int* arr = new int[len];
	cout << "请输入数组元素："<<endl;
	for (int j = 0; j < len; j++)
	{
		cin >> arr[j];
	}
	cout << "排序前的数组为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << *(arr+i) << " ";
	}
	cout << endl;
	mp(arr, len);
	cout << "排序后的数组为：" << endl;
	for (int j = 0; j < len; j++)
	{
		cout << *(arr+j) << " ";
	}
	delete[]arr;
	return 0;
}