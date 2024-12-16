#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel[10] = { 40.0,39.0,38.0,37.0,36.0,35.0,34.0,33.0,32.0,31.0 };
	double fah[10] = { 120.0,110.0,100.0,90.0,80.0,70.0,60.0,50.0,40.0,30.0 };
	cout << "Celsius" << " " << "Fahrenheit" << " " << "|" << " " << "Fahrenheit" << " " << "Celsius" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << cel[i] << " ";
		double f=celsius_to_fah(cel[i]);
		cout << f << " "<<"|"<<" ";
		cout << fah[i] << " ";
		double c=fahrenheit_to_cels(fah[i]);
		cout << c << endl;
	}
}