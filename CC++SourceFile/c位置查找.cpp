#include <stdio.h>
int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		int arr[50];
		int L,K;
		int cheak=0;
		scanf("%d%d",&L,&K);
		for (int i=0;i<L;i++)
			scanf("%d",&arr[i]);
		for(int j=0;j<L;j++)
		{
			if (arr[j] == K)
			{
				printf("%d\n",j+1);
				cheak = 1;
				break;
			}
		}
		if (cheak == 0)
			printf("-1\n");
		oj--;
	}
	return 0;
}
