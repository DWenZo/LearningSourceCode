#include <stdio.h>
#include <math.h>

void calculate_factorial();
void Leap_year_Judgment();
bool isPrime(int);

int main()
{
	int oj;
	scanf("%d", &oj);
	while (oj != 0)
	{
		printf("1 计算n!\n");
		printf("2 输出素数\n");
		printf("3 判定闰年\n");
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			calculate_factorial();
			break;
		case 2:
			int s, e;
			scanf("%d%d",&s,&e);
			for (int i = s; i <= e; i++) 
			{	
				if (  isPrime(i)  )
					printf("%d ",i);
			}
			break;
		case 3:
			Leap_year_Judgment();
			break;
		}
		oj--;
	}
	return 0;
}

void calculate_factorial()
{
	int n, sum = 1;
	scanf("%d", &n);
	if (n == 0)
		printf("1\n");
	else {
		for (int i = 1; i <= n; i++)
		{
			sum = i*sum;
		}
		printf("%d\n", sum);
	}
}

bool isPrime(int count)
{
		for (int i = 2; i * i <= count;i++)
		{
			if (count % i == 0)
				return false;
		}
		return true;
}

void Leap_year_Judgment()
{
	int y;
	scanf("%d", &y);
	if (y % 4 == 0)
	{
		if (y % 100 == 0 && y % 400 == 0)
			printf("%d是闰年\n", y);
		else if (y % 100 != 0)
			printf("%d是闰年\n", y);
		else
			printf("%d非闰年\n", y);
	}
	else
		printf("%d非闰年\n", y);
}

