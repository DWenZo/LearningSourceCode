//2017-12-4
#include <stdio.h>
#include <string.h>

long charge (char s[]);   //function prototype
int get(char c);

int main()
{
	int oj;
	scanf("%d",&oj);
	while(oj--)
	{
		char hexa[50];
		scanf("%s",&hexa);
		long dec = charge (hexa);
		 
		printf("%d\n",dec);
	}
	return 0;
}

long charge (char s[])
{
	long decimal=0;
	int powt = 1,len=0;
	len = strlen(s);
	for(int i=len-1;i>=0;i--)
	{
		decimal += powt * get(s[i]);
		powt *= 16;
	}
	return decimal;
}
int get(char c)
{
	 if(c >= '0' && c <= '9')
    {
        return c - '0';
    }
    if(c >= 'A' && c <='F') 
    {
        return c - 'A' + 10;
    }
    if(c >= 'a' && c <= 'f')
    {
        return c - 'a' + 10;
    }
    return -1;
}