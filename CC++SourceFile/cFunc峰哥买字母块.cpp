//2017-12-4
#include <stdio.h>

int Check(char BuyAlpha[10000],int);

int main()
{
	int oj;
	scanf_s("%d", &oj);
	while (oj--)
	{
		int n = 0;
		char c[10000];
		scanf_s("%d", &n);
		gets_s(c);
		gets_s(c);
		n = Check(c,n);
		if (n == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

int Check(char BuyAlpha[10000],int n)
{
	//shen zhen university
	char SZU[] = "shenzhenuniversity";
	int i,j;
	int flag = 0;
	for (i = 0; i < 18; i++)
	{
		flag = 0;
		for (j = 0; j < n; j++)
		{
			if (SZU[i] == BuyAlpha[j])
			{
				printf_s("up:%c - %c \n", SZU[i], BuyAlpha[j]);
				BuyAlpha[j] = '0';	
				flag = 1;
				printf_s("flag:%d\n",flag);
				printf_s("down:%c - %c \n===========\n", SZU[i], BuyAlpha[j]);
				break;
			}
		}
		printf_s("lastflag:%d\n==------------==\n", flag);
		if (flag == 0)
			return 0;
	}
	return 1;
}