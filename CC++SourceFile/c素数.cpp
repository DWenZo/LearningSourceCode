#include <stdio.h>
int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		int n,m,j;
		int sum = 0;

		scanf("%d%d",&n,&m);
		for (int i = n;i<=m;i++)
		{
			for (j = 2; j <= i;j++)
			{
				if( i%j == 0)
					break;
			}
			if (j == i)
			{
				printf("%d ",i);
				sum += i;
			}

		}

		if (sum != 0)
			printf("\n%d\n",sum);
		else 
			printf("NO\n");

		oj--;
	}
	return 0;
}

