#include <stdio.h>
#include <math.h>

int main()
{
	int ojcount;
	scanf("%d",&ojcount);
	while(ojcount != 0)
	{
		int y,m,d,inData,outData;

		scanf("%d/1/1 %d",&y,&inData);
		scanf("%d/%d/%d",&y,&m,&d);
		
		int days=0;
		int Feb;
		if (y%4==0)
		{
			if(y%100==0 && y%400==0)
				Feb=29;
			else if(y%100 !=0 )
				Feb=29;
			else 
				Feb=28;
		}
		else
			Feb=28;
		for (int cc = 1; cc < m;cc++)
		{
			if (cc==1 || cc==3 || cc==5 || cc==7 || cc==8 || cc==10 || cc==12)
				days += 31;
			else if (cc==4 || cc==6 || cc==9 || cc==11)
				days += 30;
			else if (cc == 2)
				days += Feb;
		}
		days += d ;
		days = days%7;
		outData = inData + days -1;
		if (outData >=7)
			outData = outData - 7;
		
		switch(outData)
		{
		case 0:
			printf("%d/%02d/%02d是星期天\n",y,m,d);
			break;
		case 1:
			printf("%d/%02d/%02d是星期一\n",y,m,d);
			break;
		case 2:
			printf("%d/%02d/%02d是星期二\n",y,m,d);
			break;
		case 3:
			printf("%d/%02d/%02d是星期三\n",y,m,d);
			break;
		case 4:
			printf("%d/%02d/%02d是星期四\n",y,m,d);
			break;
		case 5:
			printf("sd/%d/%d是星期五\n",y,m,d);
			break;
		case 6:
			printf("%d/%02d/%02d是星期六\n",y,m,d);
			break;
		}
		ojcount--;
	}
	return 0;
}
