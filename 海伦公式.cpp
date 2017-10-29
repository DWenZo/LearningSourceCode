//海伦公式
//  10/11/2015
#include <iostream>
#include <math.h>
double Helen(double a, double b, double c);
int main()
{
	using namespace std;
	cout << "输入三角形3条边,将会求出三角形面积." << endl;
	double a, b, c;
	// 输入Δ三条边
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	double S = Helen(a, b, c);
	cout << "面积S = " << S << endl;
	system("pause");
	return 0;
}
double Helen(double a, double b, double c)
{
	double S, p,x;
	p = (a + b + c) / 2;
	x = p * (p - a)*(p - b)*(p - c);
	S = sqrt(x);
	return S;
}