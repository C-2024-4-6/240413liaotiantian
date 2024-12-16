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
    cout << "请输入两个正整数："<<endl;
    cin >> num1 >> num2;

    int i = gys(num1, num2);
    int j = gbs(num1, num2);

    cout << num1 << "和" << num2 << "的最大公约数是：" << i << endl;
    cout << num1 << "和" << num2 << "的最小公倍数是：" <<j << endl;

    return 0;
}