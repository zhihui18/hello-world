#include <stdio.h>

int main()
{
	int n,arr[100],i,min=0,temp;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		while(getchar()!='\n') continue;
		for(i=0;i<n;i++)
			min=arr[min]<arr[i]?min:i;
		temp=arr[0];
		arr[0]=arr[min];
		arr[min]=temp;
		for(i=0;i<n-1;i++)
			printf("%d ",arr[i]);
		printf("%d\n",arr[n-1]);
	}

	return 0;
}