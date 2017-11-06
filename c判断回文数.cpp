#include <stdio.h>

int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj != 0)
	{
		int num;
		int temp,sum=0;
		scanf("%d",&num);
		temp = num;
		while(temp != 0){
			sum = sum*10 + temp % 10;
			temp /= 10;
			
		}
		if(sum == num)
			printf("Yes\n");
		else
			printf("No\n");
		
		oj--;
	}
	return 0;
}
