//  ����? ����?
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
		cout << "�������" << i + 1 << "��doubleֵ:";
		cin >> arr[i];
		ard[i] = 1.0 / arr[i];
	}
	double j = 0;
	for (i = 0; i < 5; i++){
		j = j + ard[i];
	}
	cout << "�������5��doubleֵ�ĵ����ĺ���" << j << endl;
	return 0;
}