#include<iostream>
#include<set>
using namespace std;


int main()
{
		int m,n;
		while(cin>>m)
		{
				cin>>n;
				set<int> s;
				int *x=new int[m];
				int *y=new int[n];
				for(int i=0;i<m;i++)
				{
						cin>>x[i];
						s.insert(x[i]);
				}
				for(int i=0;i<n;i++)
				{
						cin>>y[i];
						s.insert(y[i]);
				}
				set<int>::iterator j;
			    j=s.begin();
				cout<<*j;
				j++;
				for(;j!=s.end();++j)
						cout<<" "<<*j;
		}
		return 0;
}

