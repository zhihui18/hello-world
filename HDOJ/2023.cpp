#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
	int m,n;
	while(cin>>m>>n)
	{
		int i,j;
		int grad[50][5];
		double stume[50]={0},clame[5]={0};
		for(i=0;i<m;i++)
		{
			int sumstu=0;
			for(j=0;j<n;j++)
			{
				cin>>grad[i][j];
				sumstu+=grad[i][j];
			}
			stume[i]=double(sumstu)/n;
		}
		for(j=0;j<n;j++)
		{
			int sumcla=0;
			for(i=0;i<m;i++)
			{
				sumcla+=grad[i][j];
			}
			clame[j]=double(sumcla)/m;		
		}
		int num=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(grad[i][j]>=clame[j])
					continue;
				else
					break;
			}
			if(j!=n)
				continue;
			else
				num++;
		}
		for(i=0;i<m-1;i++)
			cout<<fixed<<setprecision(2)<<stume[i]<<" ";
		cout<<stume[m-1]<<endl;
		for(j=0;j<n-1;j++)
			cout<<fixed<<setprecision(2)<<clame[j]<<" ";
		cout<<clame[n-1]<<endl;
		cout<<num<<endl<<endl;
	}	
	return 0;
}