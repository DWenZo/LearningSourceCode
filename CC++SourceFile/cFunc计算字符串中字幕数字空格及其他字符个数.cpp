//2017-12-4
#include <stdio.h>
#include <ctype.h>
void counter(char c[]);

int main()
{
	char c[1000];
	gets(c);
	counter(c);
	return 0;
}

void counter(char c[])
{
	int ac,nc,sc,oc;
	ac = nc = sc = oc =0;
	for(int i = 0;c[i] != '\0';i++)
	{
		if (isalpha(c[i]))
		{
			ac++;
		//	printf("isALPHA\n");
		}
		else if (isdigit(c[i]))
		{
			nc++;
			//printf("isDIGIT\n");
		}
		else if (c[i] == ' ')
		{
			sc++;
			//printf("isSP\n");
		}
		else
		{
			oc++;
			//printf("isother\n");
		}
	}
	printf("%d %d %d %d \n",ac,nc,sc,oc);
}