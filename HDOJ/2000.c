#include<stdio.h>
int main(void)
{
	char a[3]={0},temp=0;
	int i=0,j=0,k=0;
	while(scanf("%c%c%c",&a[0],&a[1],&a[2])!=EOF)
	{
		flushall();
		for(i=0;i<2;i++)
	{
		k=i;
		for(j=i+1;j<3;j++)
		{
			if(a[j]<a[k])
				k=j;
		}
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
		printf("%c %c %c\n",a[0],a[1],a[2]);
	}

	return 0;
}