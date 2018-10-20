#include<iostream>
using namespace std;

int main(void)
{
	_int64 ans[51];//__int64 a[60]={0,3,6,6};
	ans[1]=3;
	ans[2]=6;
	int i;
	_int64 t=3*2;
	for(i=3;i<=50;i++)
	{
		t*=2;//3*2^(n-1)
		ans[i]=t-ans[i-1];//a[i]=a[i-1]+2*a[i-2];
	}
	int N;
	while(cin>>N)
		printf("%I64d\n",ans[N]);
	return 0;
}