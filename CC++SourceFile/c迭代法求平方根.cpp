//迭代法求平方根
#include <stdio.h>
#include <math.h>
int main()
{
	double a=0;
	//X[n+1]=1/2(X[n]+a/X[n])
	double x0,x1;
	x0=x1=0;
	scanf("%lf",&a);
	x0 = a/2;
	x1 = (x0 + a/x0)/2;
	while(fabs(x1 - x0) >= 1e-5)
	{
		x0 = x1;
		x1 = (x0 + a/x0)/2;
	}
	printf("%.3f\n",x1);
	
	return 0;
}