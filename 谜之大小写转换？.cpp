//   8/8/2015   
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	cout << "������ʲô����,����@����������:" << endl;
	char ch;
	cin.get(ch);
	while (ch != '@')               //�Ƿ��������
	{
		if (isalpha(ch)){     //����Ƿ���ĸ,������ĸ��������
			if (islower(ch)){        //����д����Сд
				toupper(ch);        //Сдת���ɴ�д�����
				cout << ch;
			}
			else{
				tolower(ch);        //��дת����Сд�����
				cout << ch;
			}                       //
		}
	}
	system("pause");
}