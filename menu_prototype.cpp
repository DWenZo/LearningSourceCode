// 菜单驱动雏形 使用switch语句!
// 8/22/2015 ⊙﹏⊙‖∣ 准备开学了怎么办
#include <iostream>

using namespace std;
void showmenu();                                 //函数原型
int main()
{
	char choice;
	showmenu();
	cin >> choice;
	while (choice != 'q')                         //输入q将会退出!
	{
		switch (choice)
		{
		    case 'c':cout << "Tiger is a kind of carnivore.\n\n"; break;
		    case 'p':cout << "I am not a pianist.\n\n"; break;
		    case 't':cout << "A maple is a tree.\n\n"; break;
		    case 'g':cout << "Computer game is so funny.\n\n"; break;
		    case 'q':break;
		    default:cout << "Please enter c p t g or q.\n"; break;
		}
		showmenu();
		cin >> choice;
	}
	return 0;
}
//自定义函数
void showmenu()                        
{
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore\n" << "p) pianist\n" << "t) tree\n" << "g) game\n" << "q) quit\n";
}