#include <stdio.h>

int main()
{
	int m, n, i, arr[3] = {0}, ans[100] = {0}, j;
	while (scanf("%d %d", &m, &n) != EOF)
	{
		int flag = 0, ii, coun = 0;
		for (i = m; i <= n; i++)
		{
			int k = 2;
			ii = i;
			while (ii != 0)
			{
				arr[k--] = ii % 10; //已知三位数,可不用循环，直接除整取余
				ii = ii / 10;
			}
			if (i == (arr[0] * arr[0] * arr[0] + arr[1] * arr[1] * arr[1] + arr[2] * arr[2] * arr[2]))
			{
				flag = 1;
				ans[coun++] = i;
			}
		}
		if (flag == 0)
			printf("no\n");
		else
		{
			for (j = 0; j < coun - 1; j++)
				printf("%d ", ans[j]);
			printf("%d\n", ans[coun - 1]); //更好地处理空格,不必用数组存下
		}
	}

	return 0;
}

////////////////
/*
#include<stdio.h>
int main()
{
	int m,n,a,b,c,i,j;
    while (scanf("%d%d",&m,&n)!=EOF)
    {
	j=0;
	for(i=m;i<=n;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		
		if(i==a*a*a+b*b*b+c*c*c)
		{
			if(j==1)
			printf(" ");
			printf("%d",i);            //对空格的处理!!!
			j=1;
		}
	} 
	if(j==0)
	printf("no\n");
    else
    printf("\n");}
	return 0;
}       */