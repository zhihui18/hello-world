#include <stdio.h>
int main(void)
{
    char a[3]={0},b[3]={0};/*数组a,b分别存输入数字*/
	int g[3]={0},c[4]={0};/*数组c存和*/
	int i=0,ca=0,cb=0,min=0,max=0;
	scanf("%s %s",a,b);
	for(i=0;i<3;i++)
	{
		ca++;
		if(a[i]=='\0')
			break;
	}
	ca--;
	for(i=0;i<3;i++)
	{
		cb++;
		if(b[i]=='\0')
			break;
	}
	cb--;
	min=ca<cb?ca:cb;
    max=ca>cb?ca:cb;
	g[max-1]=a[ca-1]-'0'+b[cb-1]-'0';
	for(i=1;i<max;i++)
	{
		if(i<min)
		    g[max-1-i]=a[ca-1-i]-'0'+b[cb-1-i]-'0'+g[max-i]/10;
		else
		{
			if(ca>=cb)
				g[max-1-i]=a[ca-1-i]-'0'+g[max-i]/10;
			else
				g[max-1-i]=b[cb-1-i]-'0'+g[max-i]/10;
		}
	}
	if(g[0]>=10)
		c[0]=g[0]/10;
	for(i=0;i<max;i++)
	{
		c[max-i]=g[max-1-i]%10;
	}
	if(c[0]!=0)
	{
		for(i=0;i<max+1;i++)
		{
			printf("%d",c[i]);
		}
		printf("\n");
	}
	else
	{
		for(i=1;i<max+1;i++)
		{
			printf("%d",c[i]);
		}
		printf("\n");
	}

    return 0;
}
