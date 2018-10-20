#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}
int main(void)
{
	double arr[]={3.2,1.1,4,22,2,11,6,8,5};
	sort(arr,arr+8);
	for(int i=0;i<9;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	sort(arr,arr+8,cmp);
	for(int j=0;j<9;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	return 0;
}