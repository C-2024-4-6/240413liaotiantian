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
	cout << "����������Ԫ�ظ�����";
	cin >> len;
	int* arr = new int[len];
	cout << "����������Ԫ�أ�"<<endl;
	for (int j = 0; j < len; j++)
	{
		cin >> arr[j];
	}
	cout << "����ǰ������Ϊ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << *(arr+i) << " ";
	}
	cout << endl;
	mp(arr, len);
	cout << "����������Ϊ��" << endl;
	for (int j = 0; j < len; j++)
	{
		cout << *(arr+j) << " ";
	}
	delete[]arr;
	return 0;
}