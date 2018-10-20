#include<iostream>
using namespace std;

int main(void)
{
	_int64 S[21]={0,1,2},Ans[21]={0,0,1,2};
	int i;
	for(i=3;i<=20;i++)
	{
		S[i]=i*S[i-1];
		Ans[i]=(i-1)*(Ans[i-1]+Ans[i-2]);//È«´íÅÅ¹«Ê½
	}
	int C,j,n;
	cin>>C;
	for(j=0;j<C;j++)
	{
		cin>>n;
		printf("%.2lf%%\n",1.0*Ans[n]/S[n]*100);
	}
	return 0;
}