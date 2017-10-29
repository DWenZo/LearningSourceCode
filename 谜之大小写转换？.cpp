//   8/8/2015   
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	cout << "请输入什么鬼都行,输入@来结束输入:" << endl;
	char ch;
	cin.get(ch);
	while (ch != '@')               //是否结束输入
	{
		if (isalpha(ch)){     //检测是否字母,不是字母将被丢弃
			if (islower(ch)){        //检测大写还是小写
				toupper(ch);        //小写转换成大写并输出
				cout << ch;
			}
			else{
				tolower(ch);        //大写转换成小写并输出
				cout << ch;
			}                       //
		}
	}
	system("pause");
}