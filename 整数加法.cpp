#include<iostream>
#include<string>
#include<cstdio>
#include<stdlib.h>
#include<stack>
using namespace std;

int judge(string s)
{
		int size=s.size();
		int flag=0;
		for(int i=0;i<size;i++)
		{
				int y=(int) s[i];
				if(y<48||y>57)
				{
						flag=1;
						break;
				}
		}
		if(flag==1)
				return 0;
		else
				return 1;
}
						                                        
int main()
{
		string s1;
		string s2;
		while(cin>>s1)
		{

			cin>>s2;
			stack <int>sta;
			int size1=s1.size()-1;
			int size2=s2.size()-1;
			int tag=0;
			if(judge(s1)==0||judge(s2)==0)
					tag=1;
			int flag=0;
			if(tag==1)
			{
					cout<<"error"<<endl;
					continue;
			}
			else
			{
			while(size1>=0&&size2>=0)
			
			{
					int y1=atoi((s1.substr(size1,1)).c_str());
					int y2=atoi((s2.substr(size2,1)).c_str());
					int sum=y1+y2+flag;
					flag=0;
					if(sum>9)
					{
							sta.push(sum-10);
							flag=1;
					}
					else
							sta.push(sum);
					size1--;
					size2--;
	    	}
			while(size1>=0)
			{
					int y1=atoi((s1.substr(size1,1)).c_str());
					int sum=flag+y1;
					flag=0;
					if(sum>9)
					{
							sta.push(sum-10);
							flag=1;
					}
					else
							sta.push(sum);
					size1--;
			}
			while(size2>=0)
			{
					int y1=atoi((s2.substr(size2,1)).c_str());
					int sum=flag+y1;
					flag=0;
					if(sum>9)
					{
							sta.push(sum-10);
							flag=1;
					}
					else
							sta.push(sum);
					size2--;
			}
			if(flag==1)
					sta.push(flag);
			while(!sta.empty())
			{
					cout<<sta.top();
					sta.pop();
			}
			cout<<endl;
			}
		}
		return 0;
}
		
