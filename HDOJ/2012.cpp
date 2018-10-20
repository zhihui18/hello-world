#include<iostream>
using namespace std;

int main(void)
{
	int x,y;
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
			return 0;
		int i,j;
		for(i=x;i<=y;i++)
		{
			int a=i*i+i+41;
			for(j=2;j<a;j++)
			{
				if(a%j!=0)
					continue;
				else
					break;
			}
			if(j!=a)
				break;
		}
		if(i!=y+1)
			cout<<"Sorry"<<endl;
		else
			cout<<"OK"<<endl;
	}	
	return 0;
}