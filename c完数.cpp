
//完数判断
#include <stdio.h>
int main()
{
	int count=0;
	scanf("%d",&count);
	while(count>0)
	{
		int n,sum;
		sum = 1;
		scanf("%d",&n);
		
		for(int j=2;j<n;j++)
		{
			if(n%j == 0)
				sum += j;
		}
		if (sum == n)
			printf("yes");
		else 
			printf("no");
		
		for(int k=1;k<n;k++)
		{
			if(n%k == 0)
				printf(",%d",k);
		}
		printf("\n");
		count--;
	}
	return 0;
}
//--