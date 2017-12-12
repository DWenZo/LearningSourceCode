// CtestPro.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>
using namespace std;
int main()
{
	int oj = 0;
	scanf_s("%d", &oj);
	while (oj--)
	{
		char inipv6[40] = { 0 };
		scanf_s("%s", &inipv6, 40);
		/*
		/*                   initialize
		/*****************************************************************/
		int i = 0, j = 0, k = 0;
		char pcipv6[8][5] = { 0 };
		char outipv6[8][6] = { 0 };
		for (i = 0; i < 8; i++)
		{
			pcipv6[i][4] = '\0';
			outipv6[i][5] = '\0';
		}
		/*
		/*                    segmentation
		/*****************************************************************/
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 4; j++)
			{
				pcipv6[i][j] = inipv6[k];
				k++;
			}
			k++;
		}
		/*
		/*					process
		/*****************************************************************/
		char zero[5] = "0000";
		for (i = 0; i < 8; i++)
		{
			if (!(strcmp(pcipv6[i], zero)))
			{
				if (i==0)
				{
					outipv6[i][0] = ':';
					outipv6[i][1] = ':';
					outipv6[i][2] = '\0';
				}
				else {
					outipv6[i][0] = ':';
					outipv6[i][1] = '\0';
				}
				int flag = 0;
				for (j = i + 1; j < 8; j++)
				{
					
					if (!(strcmp(pcipv6[j], zero)))
					{
						
						outipv6[j][0] = '\0';
					}
					else
						break;
				}
				for (j = j + 1; j < 8; j++)
				{
					if (!(strcmp(pcipv6[j], zero)))
					{
						if (j == 7) {
							outipv6[j][0] = '0';
							outipv6[j][1] = '\0';
						}
						else
						{
							outipv6[j][0] = '0';
							outipv6[j][1] = ':';
							outipv6[j][2] = '\0';
						}
					}
				}
				break;
			}
		}
		char z0[2] = "0";
		for (i = 0; i < 8; i++)
		{
				if (pcipv6[i][0] == '0') 
				{
					if ( strcmp(pcipv6[i], zero) == 0 ) 
					{
						continue;
					}
					for (j = 1,k=0; j < 4; j++)
					{
						if (pcipv6[i][j] == '0')
							continue;
						outipv6[i][k] = pcipv6[i][j];
						k++;
					}
					if(i == 7)
						outipv6[i][k] = '\0';
					else {
						outipv6[i][k] = ':';
						outipv6[i][k + 1] = '\0';
					}
				}
				else
				{
					strcpy_s(outipv6[i], pcipv6[i]);
					if (i != 7)
					{
						outipv6[i][4] = ':';
						outipv6[i][5] = '\0';
					}
				}
		}
		/*
		/*					OUTPUT
		/*****************************************************************/
		for (i = 0; i < 7; i++)
		{
			printf("%s", outipv6[i]);
		}
		printf("%s\n", outipv6[i]);
	}
	//
	return 0;
}
// 0000:0000:0000:0000:0000:0000:0000:0000
