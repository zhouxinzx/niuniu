#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
		double n;
		int m;
		while(cin>>n)
		{
		double sum=0.0;
		double temp=n;
		cin>>m;
 		for(int i=0;i<m;i++)
		{
				sum=sum+temp;
				temp=sqrt(temp);
		}
		cout.unsetf(ios::fixed);
		cout<<fixed<<setprecision(2)<<sum<<endl;
		}
		return 0;
}
