#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int m,n;
	int A[101]={0},B[101]={0},Ans[101]={0};
	while(scanf("%d %d",&m,&n))                //while(cin>>n>>m,n||m)
	{
		int i,j,k=0;
		if(m==0&&n==0)                         //
			return 0;
		for(i=0;i<m;i++)
			cin>>A[i];
		for(i=0;i<n;i++)
			cin>>B[i];
		if(m==0)
		{
			cout<<"NULL"<<endl;
			continue;
		}
		if(n==0)
		{
			sort(A,A+m);
			for(i=0;i<m;i++)
				cout<<A[i]<<" ";
			cout<<endl;
			continue;
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(A[i]==B[j])
					break;
			}
			if(j==n)
				Ans[k++]=A[i];
		}
		if(k>1)
			sort(Ans,Ans+k);
		if(k==0)
			cout<<"NULL";
		else
		{
			for(i=0;i<k;i++)
				cout<<Ans[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}