#include <stdio.h>

void del_char(char a[], char ch);

int main()
{
	char ch;
	char cc[1000];
	scanf_s("%c", &ch);
	gets_s(cc);
	gets_s(cc);
	del_char(cc, ch);
	printf_s("%s\n", cc);
	return 0;
}

void del_char(char a[], char ch)
{
	char b[50];
	int i, j;
	int len = 0;
	for (len = 0; a[len] != '\0'; len++);
	for (i = j = 0; j < len; i++, j++)
	{
		if (a[j] == ch)
		{
			i--;
			continue;
		}
		b[i] = a[j];
	}
	for (j = 0; j < i; j++)
		a[j] = b[j];
	a[j] = '\0';
}