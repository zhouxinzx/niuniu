#include<iostream>
using namespace std;

void calculate(int m,int n)
{

	int flag=0;
	for(int i=m;i<=n;i++)
	{
		int x=i%10;
		int y=((i-x)/10)%10;
		int z=(i-x-10*y)/100;
		int temp=x*x*x+y*y*y+z*z*z;
		if(temp==i)
		{
			if(flag==0)
				cout<<i;
			else
				cout<<" "<<i;
			flag=1;
		}
     }

	if(flag==0)
		cout<<"no";
	cout<<endl;
}
int main()
{
		int m,n;
		while(cin>>m)
		{
			cin>>n;
			calculate(m,n);
		}
		return 0;
}
