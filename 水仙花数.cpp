// 水仙花数 什么鬼的  谁发明这种东西的?
// 我还以为是秋水仙素
//8/19/2015
#include <iostream>
#include <math.h>
int main()
{
	using namespace std;
	int i;
	for (i = 100; i < 1000; i++)
	{
		int g = i % 10;
		int s = (i / 10) % 10;
		int b = i / 100;
		if (pow(g, 3) + pow(s, 3) + pow(b, 3) == i)
			cout << i << "是水仙花数." << endl;
	}
	return 0;
}