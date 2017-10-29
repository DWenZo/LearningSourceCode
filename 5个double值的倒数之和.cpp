//  倒数? 倒数?
// 8/20/2015
#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<double, 5>arr;
	array<double, 5>ard;
	int i;
	for (i = 0; i < 5; i++){
		cout << "请输入第" << i + 1 << "个double值:";
		cin >> arr[i];
		ard[i] = 1.0 / arr[i];
	}
	double j = 0;
	for (i = 0; i < 5; i++){
		j = j + ard[i];
	}
	cout << "你输入的5个double值的倒数的和是" << j << endl;
	return 0;
}