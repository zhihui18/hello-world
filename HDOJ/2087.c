#include<stdio.h>
#include<string.h>
int main(void)
{
	char clo[1000]={0},pie[1000]={0};
	int i,j,ncl=0,npi=0,count=0;
	while(scanf("%s",clo)!=NULL)
	{
		if(clo[0]=='#')
			return 0;
		scanf("%s",pie);
		ncl=strlen(clo);
		npi=strlen(pie);
		for(i=0;i<ncl;i++)
		{
			if(clo[i]==pie[0])
			{
				for(j=1;j<npi;j++)
				{
					if(clo[i+j]!=pie[j])
						break;
				}
				if(j==npi)
				{
					count++;
					i+=npi-1;/*避免重复选取；之后还自加一*/
				}
			}
		}
		printf("%d\n",count);
		count=0;
	}

	return 0;
}