// CtestPro.cpp: 定义控制台应用程序的入口点。
//2017/11/20

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

int main()
{
	int oj;
	scanf_s("%d", &oj);
	getchar();
	while (oj != 0)
	{
		//Initialize
		char words[20][30] = { 0 };
		char temp[30] = { 0 };
		int count[20] = { 0 };
		char x = 1;
		int i = 0, j = 0;
		while (true)
		{
			//INPUT complete input and counting 
			gets_s(temp);
			if (temp[0] == '0')
				break;

			for (j = 0; j <= i; j++)
			{
				//printf("for-succeed:%d\n", j);
				if (strcmp(temp, words[j]) == 0)
				{
					count[j]++;
					//printf("count:%d\n", j);
					break;
				}
			}
			if (j == (i+1))
			{
				strcpy_s(words[i], temp);
			//	printf("First:%d\n", i);
				count[i]++;
				i++;
			}
		}
		//
		int ii = i;
		for (ii = i; ii>0; ii--) 
		{
			for (j = 0; j < ii; j++)
			{
				if (count[j] < count[j + 1])
				{
					int ttm = count[j];
					count[j] = count[j + 1];
					count[j + 1] = ttm;
					strcpy_s(temp, words[j]);
					strcpy_s(words[j], words[j + 1]);
					strcpy_s(words[j + 1], temp);
				}
			}
		}
		for (j = 0; j < i; j++)
			printf("%d %s\n", count[j], words[j]);

		//
		oj--;
	}
	return 0;
}

