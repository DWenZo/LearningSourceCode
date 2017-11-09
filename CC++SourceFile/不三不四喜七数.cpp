#include <stdio.h>

int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		int n;
		scanf("%d",&n);
		int count=0;
		for (int i=1; i<=n;i++)
		{
			if (i%3 != 0 && i%4 != 0 && i%7 == 0)
				count++;
		}
		printf("%d\n",count);

		oj--;
	}
	return 0;
}
