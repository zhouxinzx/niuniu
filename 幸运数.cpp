#include <iostream>
#include<string>
#include <bitset>//使用bitset标准库好了
using namespace std;

int sum(int a)
{
	int add=0;
	while(a)
	{
		add=add+a%10;
		a=a/10;
	}
	return add;
}
int main()
{
    int n;
	cin>>n;
	int count=0;
	for(int k=1;k<=n;k++)
	{
    bitset<20> t;
    t = k;
	int add=0;
	for(int i=0;i<t.size();i++)
	{
		int j=int(t[i]);
		add=add+j;
	}
	if(add==sum(k))
		count++;
		
	}
	cout<<count<<endl;
    return 0;
}
