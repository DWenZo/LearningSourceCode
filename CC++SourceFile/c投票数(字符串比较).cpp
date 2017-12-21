#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
		char candidate[3][6] = { "Li","Zhang","Fu" };
		int candidatevote[3] = { 0 };
		int vote = 0;
		scanf("%d", &vote);
		char votename[50] = { 0 };
		while (vote--)
		{
			scanf("%s", votename);
			for (int i = 0; i < 3; i++)
			{
				if (strcmp(votename, candidate[i]) == 0)
				{
					candidatevote[i]++;
				}
			}
		}
		for (int j=0; j < 3; j++)
		{
			printf("%s:%d\n", candidate[j], candidatevote[j]);
		}
	//
	return 0;
}