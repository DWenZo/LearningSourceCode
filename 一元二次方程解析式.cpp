//输入3个点求出一元二次方程的解析式        ²²
// 额 话说我忘记怎么求解析式了 0.0
// 8/22/2015  wow owo 今天的第三个源码了  准备开学了QAQ
#include <iostream>
#include <math.h>

bool panxe(double x1, double x2, double x3);

int main()
{
	using namespace std;
	double x1, y1, x2, y2, x3, y3;
	do{
		cout << "请输入第一个点:x1=";
		cin >> x1;
		cout << "y1=";
		cin >> y1;
		cout << "请输入第二个点:x2=";
		cin >> x2;
		cout << "y2=";
		cin >> y2;
		cout << "请输入第三个点:x3=";
		cin >> x3;
		cout << "y3=";
		cin >> y3;
	} while (panxe(x1, x2, x3));
	cout << "A(" << x1 << "," << y1 << "), ";
	cout << "B(" << x2 << "," << y2 << "), ";
	cout << "C(" << x3 << "," << y3 << ")." << endl;
	//  a*x1^2 + b*x1 + c = y1       a1(x1²-x3²)+b(x1-x3)+y3=y1
	//  a*x2^2 + b*x2 + c = y2       a1(x2²-x3²)+b(x2-x3)+y3=y2     
	//  a*x3^2 + b*x3 + c = y3       c = y3 -a*x3^2 - b*x3
	double a, b, c;
	a = (y2 - y3) / x2 * x2 - x3 * x3 - (x1 * x1 - x3 * x3)*(x2 - x3) / (x1 - x3);
	b = (y1 - y2 - a*(pow(x1, 2) - pow(x2, 2))) / (x1 - x2);
	c = y3 - a*pow(x3, 2) - b*x3;
	cout << a << endl; 
	cout << b << endl;
	cout << c << endl;
	if (b > 0 && c > 0 && a != 1 && b != 1)
	    cout << "解析式是:" << "y=" << a << "x^2+" << b << "x+" << c << ".\n";
	else if (b < 0 && c > 0 && a != 1)
		cout << "解析式是:" << "y=" << a << "x^2" << b << "x+" << c << ".\n";
	else if (b > 0 && c < 0 && a != 1 && b != 1)
		cout << "解析式是:" << "y=" << a << "x^2+" << b << "x" << c << ".\n";
	else if (a != 1 && b < 0 && c < 0)
		cout << "解析式是:" << "y=" << a << "x^2" << b << "x" << c << ".\n";
	else if (a == 1 && b == 0 && c == 0)
		cout << "解析式是:" << "y=" << "x^2" << ".\n";
	else if (a == 1 && b == 1 && c == 0)
		cout << "解析式是:" << "y=" << "x^2+" << "x" << ".\n";
	else if (a == 1 && b == 1 && c < 0)
		cout << "解析式是:" << "y=" << a << "x^2+" <<  "x" << c << ".\n";
	else if (a == 1 && b == 1 && c > 0)
		cout << "解析式是:" << "y=" << a << "x^2+" << "x+" << c << ".\n";
	cin.get();
	cin.get();
	return 0;
}
bool panxe(double x1, double x2, double x3)
{
	using namespace std;
	if (x1 == x2 || x1 == x3 || x2 == x3)
	{
		cout << "x不能相等.重新输入3个点.\n";
		cin.clear();
		return true;
	}
	return false;
}