#include<iostream>
#include<string>
using namespace std;

int main()
{
		string s;
		while(cin>>s)
		{
				int n=s.size();
				int i;
				for (i=n-1;i>=0;i--)
						if(s[i]=='.')
								break;
				if(i==-1)
					cout<<"null"<<endl;
				else
				{
					string c=s.substr(i+1,n-i-1);
					cout<<c<<endl;
				}
		}
		return 0;
}


