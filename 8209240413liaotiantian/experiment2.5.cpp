#include <iostream>
using namespace std;

int main() {
    int letter_count = 0;
    int space_count = 0;
    int digit_count = 0;
    int other_count = 0;

    char ch;
    cout << "������һ���ַ���";

    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letter_count++;
        }
        else if (ch == ' ') {
            space_count++;
        }
        else if (ch >= '0' && ch <= '9') {
            digit_count++;
        }
        else {
            other_count++;
        }
    }

    cout << "Ӣ����ĸ������" << letter_count << endl;
    cout << "�ո������" << space_count << endl;
    cout << "�����ַ�������" << digit_count << endl;
    cout << "�����ַ�������" << other_count << endl;

    return 0;
}