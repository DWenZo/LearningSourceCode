#include<stdio.h>
int main()
{
	int t;
	int n;
	int i,m,ati;
	int num,num1,num2;
	int y;
	scanf("%d",&t);
	while(t--)
	{
		printf("1 计算n!\n");
		printf("2 输出素数\n");
		printf("3 判定闰年\n");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
				scanf("%d",&m);
				ati=1;
				for(i=1;i<=m;i++)
					ati*=i;
					printf("%d\n",ati);
			break;
		case 2:
				scanf("%d%d",&num1,&num2);
				for(num=num1;num1<=num2;num1++)
				{
					for(i=2;i<=num1;i++)
					{
						if(num1%i==0)
							break;
					}
					if(i==num1)
						printf("%d ",num1);
				}
				printf("\n");
			break;
		case 3:
				scanf("%d",&y);
				printf("%d",y);
				if(y%4==0 && y%100!=0 || y%400==0)
					printf("是闰年\n");
				else
					printf("非闰年\n");
			break;
		default:
				printf("INPUT ERROR!\n");
			break;
			printf("\n");
	}
	printf("\n");
	}
	return 0;
	
}