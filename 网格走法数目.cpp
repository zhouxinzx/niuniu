#include<iostream>
using namespace std;


int sum(int m,int n)
{
		if(m>0&&n>0)
				return sum(m-1,n)+sum(m,n-1);
		else if(m>0)
				return sum(m-1,n);
		else if(n>0)
				return sum(m,n-1);
		else
				return 1;
}
int main()
{
		int m,n;
		while(cin>>m)
		{
				cin>>n;
				cout<<sum(m,n)<<endl;
		}
		return 0;
}
