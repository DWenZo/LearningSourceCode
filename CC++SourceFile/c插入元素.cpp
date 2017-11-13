#include <stdio.h>

int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		int n=0,e=0;
		int arr[100]={0};
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		scanf("%d",&e);
		//
		if( arr[0] > arr[1] )
		{	
			for(int j=0;j<=n;j++)
			{
				if (e > arr[j])
				{
					for(int jj=0;jj<j;jj++)
						printf("%d ",arr[jj]);
					printf("%d ",e);
					while(j<n)
					{
						if(j=n-1)
							printf("%d",arr[j]);
						else
							printf("%d ",arr[j]);
						j++;
					}
				}
			}
		}
		else
		{
			for(int k=0;k<=n;k++)
			{
				if (e < arr[k])
				{
					for(int kk=0;kk<k;kk++)
						printf("%d ",arr[kk]);
					printf("%d ",e);
					while(k<n)
					{
						if(j==n-1)
							printf("%d",arr[k]);
						else
							printf("%d ",arr[k]);
						k++;
					}
				}
			}
		}
		printf("\n");

		//
		oj--;
	}
	return 0;
}

