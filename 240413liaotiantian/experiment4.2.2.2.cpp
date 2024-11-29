#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int len = strlen(hexString);
	int result = 0;
	int power = 1;
	for (int i = len - 1; i >= 0; i--)
	{
		char c = hexString[i];
		int s;
		if (c >= '0' && c <= '9')
		{
			s = c - '0';
		}
		else if (c >= 'a' && c <= 'f')
		{
			s = c - 'a'+10;
		}
		else if (c >= 'A' && c <= 'F')
		{
			s = c - 'A'+10;
		}
		else
		{
			cout << "����Ĳ�����Ч��ʮ�������ַ�������������ȷ��ʮ�������ַ�����" << endl;
			return -1;
		}
		result += power * s;
		power *= 16;
	}
	return result;
}
int main()
{
	const char* const hexString = "A5";
	int result=parseHex(hexString);
	cout << "ʮ�����Ƶ��ַ���:" << hexString << "ת��Ϊʮ���Ƶ���Ϊ:" << result << endl;
	return 0;
}