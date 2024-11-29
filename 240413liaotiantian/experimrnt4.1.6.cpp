#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	int sy;//索引，用来指二十六个字母顺序位置的
	for (int i = 0; s[i] != '\0'; i++)//遇到空格就停
	{
		if (isalpha(s[i]))//函数，看是否为字母
		{
			sy = tolower(s[i]) - 'a';//函数，将字母转为小写，然后找索引
			counts[sy]++;
		}
	}
}
int main()
{
	const int size = 26;//二十六个字母
	int counts[size] = { 0 };//初始化数组
	cout << "Enter a string: ";
	string input;
	getline(cin, input);
	count(input.c_str(), counts);//函数，将string类型转为const char*类型，返回指针
	for (int i = 0; i < size; i++)
	{
		if (counts[i] > 0)
		{
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}