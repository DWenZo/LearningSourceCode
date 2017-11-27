#include <stdio.h>
#include <math.h>

int GCD(int,int);
int LCM(int,int);

int main()
{
	int m,n;
	m = n = 0;
	scanf("%d%d",&m,&n);
	printf("%d %d\n",GCD(m,n),LCM(m,n));
	
	return 0;
}

int GCD(int a,int b)
{
	int r=0;
	while(true)
	{
		r = a % b;
		if(r == 0)
			return b;
		a = b;
		b = r;
	}
}

int LCM(int a,int b)
{
	return a*b / GCD(a,b);
}