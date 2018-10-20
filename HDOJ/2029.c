#include<stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char arr[100]={0};
		int k=0,j,flag=0;
		scanf("%s",arr);
		while(arr[k]!='\0')
		{
			k++;
		}
		for(j=0;j<k;j++)
		{
			if(arr[j]!=arr[k-1-j])
				flag=1;
		}
		if(flag)
		{
			printf("no\n");
		}
		else
			printf("yes\n");


	}

	return 0;
}