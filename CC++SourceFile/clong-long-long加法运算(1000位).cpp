// CtestPro.cpp: 定义控制台应用程序的入口点。
//
//long long long 加法运算
#include "stdafx.h"
using namespace std;
int main()
{
	int oj = 0;
	scanf_s("%d", &oj);
	//
	for (int m=1;m<=oj;m++)
	{
		int i = 0;
		char a[1010] = { 0 };
		char b[1010] = { 0 };
		int result[1010] = { 0 };

		int an[1010] = { 0 };
		int bn[1010] = { 0 };

		scanf_s("%s%s", a, 1010, b, 1010);
		//
		//calculate the length of a and b
		int a_length = 0;
		int b_length = 0;

		for (i = 0; a[i] != '\0'; i++)
			a_length++;
		for (i = 0; b[i] != '\0'; i++)
			b_length++;
		//=======================================================================================
		//calculate the result
		int max = 0;
		max = a_length >= b_length ? a_length : b_length;
			int aaa, g;
			aaa = g = 0;
			for (aaa = a_length - 1, g = 0; aaa >= 0; aaa--, g++)
				an[g] = a[aaa] - '0';
			for (aaa = b_length - 1, g = 0; aaa >= 0; aaa--, g++)
				bn[g] = b[aaa] - '0';

			result[0] = an[0] + bn[0];
			for (int r = 1; r < max + 1; r++) {
				result[r] = an[r] + bn[r] + result[r - 1] / 10;
			}
		
		//================== OUTPUT =============================
			printf("Case %d:\n",m);
			printf("%s + %s = ", a, b);
			for (int k = max - 1; k >= 0; k--)
				printf("%d", result[k] % 10);

			printf("\n");
			if (m != oj)
				printf("\n");
		
	}
	//
	return 0;
}
//
