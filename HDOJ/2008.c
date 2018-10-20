#include <stdio.h>

int main(void)
{
	int n,i;
	int c1,c2,c3;
	double arr[100];
	while(scanf("%d",&n)&&n!=0)
	{
		c1=c2=c3=0;
		for(i=0;i<n;i++)
			scanf("%lf",&arr[i]);
		for(i=0;i<n;i++)
		{
			if(arr[i]<0)
				c1++;
			else if(arr[i]==0)
				c2++;
			else
				c3++;
		}
		printf("%d %d %d\n",c1,c2,c3);
	}

	return 0;
}