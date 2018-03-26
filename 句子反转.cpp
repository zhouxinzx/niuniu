#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
		string s;
		while(getline(cin,s))
		{
			stack <string>st;
			int i=0;
			while(i<s.size())
			{
					int j=i;
					while(j<s.size()&&s[j]!=' ')
				    	j++;
					string c=s.substr(i,j-i);
					st.push(c);
					i=j+1;
			}
			while(st.size()!=1)
			{
					cout<<st.top()<<" ";
					st.pop();
			}
            cout<<st.top();

		}
	    
		return 0;
}

