//struct.cpp 7/23/2015 15:08
#include <iostream>
#include <string>
struct MyStruct
{
	std::string name;
	int age;
	std::string birthday;
	std::string address;
};
void MyFunction(MyStruct);
int main()
{
	using namespace std;
	MyStruct D_X;
	cout << "请输入你的名字" << endl;
	getline(cin,D_X.name);
	cout << "请输入你的年龄" << endl;
	cin >> D_X.age;
	cout << "请输入你的生日" << endl;
	cin.ignore();
	getline(cin, D_X.birthday);
	cout << "请输入地址" << endl;
	getline(cin, D_X.address);
	MyFunction(D_X);
	system("pause");
	return 0;
}
void MyFunction(MyStruct D_X)
{
	using namespace std;
	cout << "名字：" << D_X.name << endl;
	cout << "年龄：" << D_X.age << endl;
	cout << "生日：" << D_X.birthday << endl;
	cout << "地址：" << D_X.address << endl;
}
