#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	int sy;//����������ָ��ʮ������ĸ˳��λ�õ�
	for (int i = 0; s[i] != '\0'; i++)//�����ո��ͣ
	{
		if (isalpha(s[i]))//���������Ƿ�Ϊ��ĸ
		{
			sy = tolower(s[i]) - 'a';//����������ĸתΪСд��Ȼ��������
			counts[sy]++;
		}
	}
}
int main()
{
	const int size = 26;//��ʮ������ĸ
	int counts[size] = { 0 };//��ʼ������
	cout << "Enter a string: ";
	string input;
	getline(cin, input);
	count(input.c_str(), counts);//��������string����תΪconst char*���ͣ�����ָ��
	for (int i = 0; i < size; i++)
	{
		if (counts[i] > 0)
		{
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}