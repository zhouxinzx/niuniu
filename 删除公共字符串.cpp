#include<iostream>
#include<string>

using namespace std;


int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
    int	size2=s2.size();
	int size1=s1.size();
	for(int i=0;i<size2;i++)
	{
		for(int j=0;j<size1;j++)
		{
			if(s1[j]==s2[i])
			{
				s1=s1.erase(j,1);
				j--;
				size1--;
			}
		}
	}
	cout<<s1<<endl;
	return 0;
}
