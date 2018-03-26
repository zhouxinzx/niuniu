#include<iostream>
using namespace std;

int main()
{
		string s;
		while(cin>>s)
		{
			int n=s.size();
			int min=n;
			for(int i=0;i<n;i++)
				{
						int j=0;
						int flag[5]={0};
						int temp=n;
						while(j<n)
						{
							if(s[(i+j)%n]=='A')
									flag[0]=1;
							if(s[(i+j)%n]=='B')
									flag[1]=1;
							if(s[(i+j)%n]=='C')
									flag[2]=1;
							if(s[(i+j)%n]=='D')
									flag[3]=1;
							if(s[(i+j)%n]=='E')
									flag[4]=1;
							int flag_count=0;
							for(int k=0;k<5;k++)
									flag_count=flag_count+flag[k];
							j++;
							if (flag_count==5)
							{
									temp=j;
									break;
							}
							
						}
						if(temp<min)
								min=temp;
					
				}
			cout<<n-min<<endl;

		}
		return 0;
}
