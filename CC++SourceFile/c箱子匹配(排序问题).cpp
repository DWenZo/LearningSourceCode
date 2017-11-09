//每个箱子都有长宽高，我们需要判断一个箱子能否放入另一个箱子中。
//例如有箱子A的尺寸是 3 x 4 x 5，箱子B的尺寸 是 5 x 6 x 4，经过比较判断，可以知道箱子A能够放入箱子B中，我们就说箱子A匹配箱子B。
//注意，当两个箱子尺寸相等，我们也认为它们匹配。
//排序问题

#include <stdio.h>
int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		int la,wa,ha;
		int lb,wb,hb;
		int temp=0;
		scanf("%d%d%d",&la,&wa,&ha);
		scanf("%d%d%d",&lb,&wb,&hb);	
		if (la>wa)
		{		
			temp = la;
			la = wa;
			wa =temp;
		}
		if (wa>ha)
		{
			temp = wa;
			wa = ha;
			ha =temp;
		}
		if (la>wa)
		{		
			temp = la;
			la = wa;
			wa =temp;
		}
		if (lb>wb)
		{		
			temp = lb;
			lb = wb;
			wb =temp;
		}
		if (wb>hb)
		{
			temp = wb;
			wb = hb;
			hb =temp;
		}
		if (lb>wb)
		{		
			temp = lb;
			lb = wb;
			wb =temp;
		}
		if ( (la <= lb && wa <= wb) || (la >= lb && wa >= wb) )
			printf("yes\n");
		else
			printf("no\n");
		
		oj--;
	}
	return 0;
}
