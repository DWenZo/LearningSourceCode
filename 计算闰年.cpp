//找出2000-2500之间的闰年  坑爹的闰年 
//那里用得着记   奥运会举行那年就是闰年了 真是的
//8/19/2015
#include <iostream>

int main()
{
	using namespace std;
	int i;
	for (i = 2000; i < 2501; i++)                        //开始循环
	{
		if (i % 4 == 0 && i % 100 != 0)                  //能被4整除不能被100整除的
			cout << i << "年是闰年." << endl;
		else if (i % 400 == 0)                           //能被400整除的
			cout << i << "年是闰年." << endl;
	}
	return 0;
}