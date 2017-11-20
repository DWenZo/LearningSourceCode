//tranform ID number from 15 to 18
//2017/11/20
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
        int i,wi=0;
        char sh[19];
        int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
        char y[12]={"10X98765432"};
        scanf("%s",&sh);
        for(i=15;i>=6;i--)
             sh[i+2]=sh[i];
        sh[6]='1';sh[7]='9';
        for(i=0;i<17;i++)
            wi+=(sh[i]-'0')*w[i];
        wi=wi%11;
        sh[17]=y[wi];
        sh[18]='\0';
        printf("%s",sh);
        printf("\n");
	}
}