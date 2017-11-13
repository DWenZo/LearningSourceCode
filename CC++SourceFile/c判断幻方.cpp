// CtestPro.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int oj;
	scanf("%d", &oj);
	while (oj != 0)
	{
		//Initialize
		int arr[100][100] = { 0 };
		int sum[100] = { 0 };
		int n,cn;
		int i, j, k;
		k = 0;
		//Input
		scanf("%d", &n);
		cn = n;
		for (i = 0; i<n; i++)
			for (j = 0; j<n; j++)
				scanf("%d", &arr[i][j]);
		//Process
		k = 0;
		for (i = 0; i < n; i++)
		{
				for (j = 0; j < n; j++)
					sum[k] += arr[i][j];
				printf("sum[%d]:%d\n",k,sum[k]);
				k++;
		}
		for (i = 0; i < n; i++)
		{
				for (j = 0; j < n; j++)
					sum[k] += arr[j][i];
				k++;
		}
		for (i = j = 0; j<n, i<n; j++, i++)
			sum[k] += arr[i][j];
		k++;
		for (i = 0, j = n - 1; i<n; i++, j--)
			sum[k] += arr[i][j];

		//
		for (k = 2 * n + 1; k>=0; k--)
			printf("test-sum[%d]:%d  ", k, sum[k]);
		printf("\n");
		//

		for (k = 2 * n + 1; k>0; k--)
			if (sum[k] != sum[k - 1])
				break;
		if (k == 0)
			printf("YES\n");
		else
			printf("NO\n");

		//
		oj--;
	}
	return 0;
}

