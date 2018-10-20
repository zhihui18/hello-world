#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	cin.ignore();//getchar();
	for(int i=0;i<n;i++)
	{
		int count=0;
		char s[200]={0};
		cin.getline(s,200);//while(ch=getchar()!='\n')
		for(int j=0;s[j]!='\0';j++)
		{
			if(s[j]>='0'&&s[j]<='9')
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}