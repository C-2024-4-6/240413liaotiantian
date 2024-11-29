#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[k])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
}
int main()
{
	int list1[80], list2[80], size1, size2, list3[160];
	cout << "Enter list1: ";
	size1 = sizeof(list1) / sizeof(list1[0]);
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
		size1 = sizeof(list1) / sizeof(list1[0]);
	}
	cout << "Enter list2: ";
	size2 = sizeof(list2) / sizeof(list2[0]);
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
		size2 = sizeof(list2) / sizeof(list2[0]);
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int k = 0; k < size1+size2; k++)
	{
		cout << list3[k] << " ";
	}
}
