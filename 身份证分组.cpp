#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int size=s.size();
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(s[i]==' ')
			continue;
		cout<<s[i];
		count++;
		if(count==6||count==14)
		{
			cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}
