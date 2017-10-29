//  啊!!! 要开学了
//   8/29/2015
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

int main()
{
	using namespace std;
	char str[50];
	char *de;
	double aaa[5];
	*de = ' ';
	cout << "请输入算式(只支持+ - * /):\n";
	cin.getline(str,50);
	int i = 0;
	char *arr = strtok(str, de);
	while (arr != NULL)
	{
		aaa[i] = *arr;
		i++;
		arr = strtok(NULL, de);
	}
	double re;
	if (aaa[1] == '+'){
		re = aaa[0] + aaa[2];
		cout << re << endl;
	}
	else if (aaa[1] == '-'){
		re = aaa[0] - aaa[2];
		cout << re << endl;
	}
	else if (aaa[1] == '*'){
		re = aaa[0] * aaa[2];
		cout << re << endl;
	}
	else if (aaa[1] == '/'){
		re = aaa[0] / aaa[2];
		cout << re << endl;
	}
	else{
		cout << "ERROR" << endl;
	}
	cin.get();
	return 0;
}