#include<iostream>
#include"mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)//�����¶ȵ������¶�
{
	double fah = cel * 9 / 5 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah) //�����¶ȵ������¶�
{
	double cel = (fah - 32) * 5 / 9;
	return cel;
}