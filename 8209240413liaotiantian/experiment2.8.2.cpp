#include <iostream>
using namespace std;
    double pfg(double a) 
    {
        if (a < 0) 
        {
            cout << "������ʵ����Χ��û��ƽ����" <<endl;
            return 0;
        }
        if (a == 0)
        {
            cout << "a��ƽ����Ϊ0" << endl;
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
        cout << "������һ����: "<<endl;
        cin >> a;
        double i = pfg(a);
        cout << "������ƽ����ԼΪ: " << i << endl;
            
        return 0;
    }