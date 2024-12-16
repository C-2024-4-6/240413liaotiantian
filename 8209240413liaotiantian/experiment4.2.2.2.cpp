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
			cout << "输入的不是有效的十六进制字符串，请输入正确的十六进制字符串！" << endl;
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
	cout << "十六进制的字符串:" << hexString << "转换为十进制的数为:" << result << endl;
	return 0;
}