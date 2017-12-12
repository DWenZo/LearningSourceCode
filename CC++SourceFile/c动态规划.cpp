//2017-12-12  动态规划 Dynamic Programming
/*
一个N*N矩阵中有不同的正整数，经过这个格子，就能获得相应价值的奖励，
从左上走到右下，只能向下向右走，求能够获得的最大价值。
例如：3 * 3的方格。
1 3 3
2 1 3
2 2 1
能够获得的最大价值为：11。
*/
#include "stdafx.h"
using namespace std;
int main()
{
	static int s[500][500] = { 0 };
	static int cost[500][500]={ 0 };
	int n = 0;
	int row = 0, column = 0;
	//*
	//*INPUT
	//***************************************************************
	scanf_s("%d", &n);
	for (row = 0; row < n; row++)
	{
		for (column = 0; column < n; column++)
		{
			scanf_s("%d", &s[row][column]);
		}
	}
	//PROCESS
	cost[0][0] = s[0][0];
	//*
	//* (0, 0) -> (0, N)  & (0, 0) -> (N, 0)
	//***************************************************************
	for (column = 1; column < n; column++)
	{
		cost[0][column] = cost[0][column - 1] + s[0][column];
	}
	for (row = 1; row < n; row++)
	{
		cost[row][0] = cost[row - 1][0] + s[row][0];
	}
	//*
	//* Dynamic Programming
	//***************************************************************
	for (row = 1; row < n; row++)
	{
		for (column = 1; column < n; column++)
		{
			cost[row][column] = s[row][column] + (cost[row - 1][column] >= cost[row][column - 1] ? cost[row - 1][column] : cost[row][column - 1]);
		}
	}
	//*
	//* OUTPUT
	//***************************************************************
	printf("%d\n", cost[n - 1][n - 1]);

	//
	return 0;
}
//
