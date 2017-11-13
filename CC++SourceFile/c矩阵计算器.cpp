#include <stdio.h>

int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		//
		int ar1[10][10]={0};
		int ar2[10][10]={0};
		int n;
		int i,j,k;
		i=j=k=0;
		// Input
		scanf("%d",&n);
		n=n-1;
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
				scanf("%d",&ar1[i][j]);
		}

		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
				scanf("%d",&ar2[i][j]);
		}
		//------

		int plus[10][10]={0};
		int mult[10][10]={0};
		
		//Process
		//Íê³ÉA+B
		for(i=0;i<=n;i++)
			for(j=0;j<=n;j++)
				plus[i][j] = ar1[i][j] + ar2[i][j];
		//------
		//Íê³ÉA*B
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				for(k=0;k<=n;k++)
					mult[i][j] += ar1[i][k]*ar2[k][j]; 
			}
		}
		//------
		
		//Output
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++){
			if(j==n)
				printf("%d",plus[i][j]);
			else
				printf("%d ",plus[i][j]);
			}
			printf("\n");
		}

		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++){
				if(j==n)
					printf("%d",mult[i][j]);
				else
					printf("%d ",mult[i][j]);
			}
			printf("\n");
		}

		//
		oj--;
	}
	return 0;
}

