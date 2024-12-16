#include <iostream>
using namespace std;

int main() {
    int letter_count = 0;
    int space_count = 0;
    int digit_count = 0;
    int other_count = 0;

    char ch;
    cout << "请输入一行字符：";

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

    cout << "英文字母个数：" << letter_count << endl;
    cout << "空格个数：" << space_count << endl;
    cout << "数字字符个数：" << digit_count << endl;
    cout << "其他字符个数：" << other_count << endl;

    return 0;
}