//  求一元二次方程的根 ax²+bx+c=0   0.0 0.0  ... . . . . . ..  
//  然并卵  感觉十字相乘更快(怎么用的?◑﹏◐)
//   8/22/2015    
#include <iostream>
#include <math.h>

int main()
{
	using namespace std;
	cout << "ax^2+bx+c=0.\n";
	double a, b, c, del;
	//开始输入a,b,c.
	cout << "请输入a,b,c(请记住a不等于0的!到时候你忘记被阿蒙打不要怪我!).\n";
	cout << "a = ";
	cin >> a;
	while (a == 0)
	{
		cout << "我不是说a不等于0的咩?";
		cin.clear();
		cout << "重新输入,你个逗逼:a = ";
		cin >> a;
	} 
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << a << "x^2+" << b << "x+" << c << "=0" << ".(输入错了?那你关了重新开!→_→)" << endl << endl;
	del = b*b - 4 * a*c;              //计算delta(就是那个三角形)
	if (del == 0)
		cout << "x1 = x2 =" << -(b / 2 * a) << endl;
	else if (del > 0){
		cout << "x1=" << (-b + sqrt(del)) / 2 * a << "   ";
		cout << "x2=" << (-b - sqrt(del)) / 2 * a << endl;
	}
	else if (del < 0)
		cout << "此方程没有实数根." << endl;
	cin.get();
	cin.get();
	return 0;
}