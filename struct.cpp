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
	cout << "�������������" << endl;
	getline(cin,D_X.name);
	cout << "�������������" << endl;
	cin >> D_X.age;
	cout << "�������������" << endl;
	cin.ignore();
	getline(cin, D_X.birthday);
	cout << "�������ַ" << endl;
	getline(cin, D_X.address);
	MyFunction(D_X);
	system("pause");
	return 0;
}
void MyFunction(MyStruct D_X)
{
	using namespace std;
	cout << "���֣�" << D_X.name << endl;
	cout << "���䣺" << D_X.age << endl;
	cout << "���գ�" << D_X.birthday << endl;
	cout << "��ַ��" << D_X.address << endl;
}
