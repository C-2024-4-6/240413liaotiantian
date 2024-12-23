#include<iostream>
using namespace std;
class Student
{
public:
	int number;
	float score;
	void set()
	{
		cin >> number;
		cin >> score;
	}
};
void max(Student* sz)
{
	float m = sz[0].score;
	int s = 0;
	for (int i = 0; i < 5; i++)
	{
		if (sz[i].score > m)
		{
			m = sz[i].score;
			s = i;
		}
	}
	cout << "五个学生中成绩最高者的学号为：" << sz[s].number << "  他的成绩为：" << sz[s].score << endl;
}
int main()
{
	Student sz[5] =
	{ Student{57,56},
		Student{65,38},
		Student{89,45},
		Student{48,78},
		Student{75,65}
	};
	Student* p = &sz[0];
	max(p);
	return 0;
}