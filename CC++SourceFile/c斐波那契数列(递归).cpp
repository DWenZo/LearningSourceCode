#include <stdio.h>
int fib(int n);
using namespace std;
int main()
{
	int oj=0;
	scanf("%d", &oj);
	
	int i = 0;
	int term[100] = { 0 };
	for (i = 0; i < oj; i++)
		scanf("%d", &term[i]);
	for (i = 0; i < oj; i++)
		printf("%d\n", fib(term[i]));
	return 0;
}
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}