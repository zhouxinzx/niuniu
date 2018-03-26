#include<iostream>
#include<string>
using namespace std;

int main()
{
		string s;
		int n;
		while(cin>>s)
		{
				cin>>n;
				int len;
				int count=0;
				for(int j=0;j<n;j++)
				{
						len=s.size();
						for(int i=0;i<len-1;i++)
						{
								if(s[i]<s[i+1])
								{
										s.erase(i,1);
										count++;
										break;
								}
						}
				}
				
				if(count==n)
						cout<<s<<endl;
				else
				{
						int m=n-count;
						len=s.size();
						s.erase(len-m,m);
						cout<<s<<endl;
				}
		}

		return 0;
}


