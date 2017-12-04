//2017-12-4
#include <stdio.h>

void swap(char str[10000]); //function prototype

int main()
{
	char str[10000];
	
	while (gets_s(str) != NULL)
	{
		swap(str);
		printf_s("%s\n", str);
	}
	return 0;
}

void swap(char str[10000])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 's')
			if(str[i+1] == 'z')
				if (str[i + 2] == 'u')
				{
					str[i] = 'S';
					str[i + 1] = 'Z';
					str[i + 2] = 'U';
				}
	}
}