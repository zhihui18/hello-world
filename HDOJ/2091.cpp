#include<iostream>
using namespace std;

int main(void)
{
	char ch;
	int n;
	int flag=0;
	while(cin>>ch&&ch!='@'&&cin>>n)
	{
		if(flag)
			cout<<endl;
		flag=1;
		int i,j;
		for(i=1;i<n;i++)
		{
			for(j=1;j<=n-i;j++)
				cout<<" ";
			cout<<ch;
			if(i==1)
				cout<<endl;
			else
			{
				for(j=1;j<=2*i-3;j++)
					cout<<" ";
				cout<<ch<<endl;
			}
		}
		for(i=1;i<=2*n-1;i++)
			cout<<ch;
		cout<<endl;
	}	
	return 0;
}