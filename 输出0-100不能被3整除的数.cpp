// 8/13/2015
// �������0-100���ܱ�3��������.
#include <iostream>
int main()
{
	using namespace std;
	int i;
	for (i = 0; i < 101; i++){
		if (i % 3 == 0)
			continue;
		else
			cout << i << endl;
	}
	return 0;
}