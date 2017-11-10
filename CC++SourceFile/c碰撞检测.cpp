/*   游戏中需要检测元素是否碰撞到一起，
比如打飞机游戏，没躲避炮弹就算碰撞，检测出来，游戏game over。
假设将游戏中的元素当作矩形，当两个矩形有重合点，则认为它们发生碰撞。*/
#include <stdio.h>
#include <math.h>
int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		double xa1,xa2,ya1,ya2;
		double xb1,xb2,yb1,yb2;
		double xa,xb,ya,yb;
		double height,width;

		scanf("%lf%lf%lf%lf",&xa1,&ya1,&xa2,&ya2);
		scanf("%lf%lf%lf%lf",&xb1,&yb1,&xb2,&yb2);

		
		xa = (xa1+xa2)/2.0;
		xb = (xb1+xb2)/2.0;
		ya = (ya1+ya2)/2.0;
		yb = (yb1+yb2)/2.0;
		
		width =( fabs(xa1-xa2) + fabs(xb1-xb2) )/2.0;
		height =( fabs(ya1-ya2) + fabs(yb1-yb2) )/2.0;

		double dx,dy;
		dx = fabs(xa-xb);
		dy = fabs(ya-yb);
		
		if ( (dx<=width) && (dy<=height))
			printf("YES\n");
		else
			printf("NO\n");		
		oj--;
	}
	return 0;
}