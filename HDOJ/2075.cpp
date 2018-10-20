#include<iostream>
using namespace std;

int main(void)
{
	int T;
	cin>>T;
	long A,B;
	for(int i=0;i<T;i++)
	{
		cin>>A>>B;
		if(A%B==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
