#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main(void)
{
	double x1,x2,y1,y2;
	while(cin>>x1>>y1>>x2>>y2)
	{
		cout<<fixed<<setprecision(2)<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<endl;
	}
	return 0;
}