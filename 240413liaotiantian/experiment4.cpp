#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << (char)testUnint << endl;
	cout << "output in short type:" << (short)testUnint << endl;//Ϊʲô���Ϊ-2?:
	cout << "output in int type:" << (int) testUnint << endl;
	cout << "output in double type:" <<  (double)testUnint << endl;
	cout << "output in double type:" << setprecision(4) << (double)testUnint << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "�˽������" << (unsigned int)testUnint << endl;
	float i = 3.1415;
	cout << "��ʵ��ת��Ϊ����" << (int)i << endl;
	system("pause");
	return 0;
}