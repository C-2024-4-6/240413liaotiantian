#include <iostream>
using namespace std;
int gys(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gbs(int a, int b) 
{
   int c = gys(a, b);
    return c*(a/c)*(b/c);
}

int main() {
    int num1, num2;
    cout << "������������������"<<endl;
    cin >> num1 >> num2;

    int i = gys(num1, num2);
    int j = gbs(num1, num2);

    cout << num1 << "��" << num2 << "�����Լ���ǣ�" << i << endl;
    cout << num1 << "��" << num2 << "����С�������ǣ�" <<j << endl;

    return 0;
}