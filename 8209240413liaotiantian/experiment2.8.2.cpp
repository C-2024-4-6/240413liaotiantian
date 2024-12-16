#include <iostream>
using namespace std;
    double pfg(double a) 
    {
        if (a < 0) 
        {
            cout << "负数在实数范围内没有平方根" <<endl;
            return 0;
        }
        if (a == 0)
        {
            cout << "a的平方根为0" << endl;
        }
        double xn = a;
        double xn1 = 0.5 * (xn + a / xn);
        while (abs(xn1 - xn) > 10-5) 
        {
            xn = xn1;
            xn1 = 0.5 * (xn + a / xn);
        }
        return xn1;
    }

    int main() {
        double a;
        cout << "请输入一个数: "<<endl;
        cin >> a;
        double i = pfg(a);
        cout << "该数的平方根约为: " << i << endl;
            
        return 0;
    }