//坑爹的阶乘.        100!
//简直就是作死!!!
//7/31/2015
#include <iostream>
#include <array>
using namespace std;
const int arsize = 1001;
int main()
{
	cout << "准备好作死了吗?按回车键开始!";
	cin.get();
	array <long double, arsize>arr;
	arr[1] = arr[0] = 1;
	for (int i = 2; i < arsize; i++)
		arr[i] = i * arr[i - 1];
	for (int i = 0; i < arsize; i++)
		cout << i << "! = " << arr[i] << endl;
	system("pause");
	return 0;
}