// ˮ�ɻ��� ʲô���  ˭�������ֶ�����?
// �һ���Ϊ����ˮ����
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
			cout << i << "��ˮ�ɻ���." << endl;
	}
	return 0;
}