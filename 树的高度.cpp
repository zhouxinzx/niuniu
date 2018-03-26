#include<iostream>
using namespace std;

int max(int x,int y)
{
		if(x>y)
				return x;
		else
				return y;
}

int getheight(int x,int **p,int num)
{
		int flag=0;
		int sig[2]={-1,-1};
		for(int i=0;i<num-1;i++)
		{
				if(p[i][0]==x)
				{
				sig[flag]=i;
				flag++;
				}
				if(flag==2)
						break;
		}
		if(flag==1)
				return 1+getheight(p[sig[0]][1],p,num);
		else if(flag==2)
		{
			int temp1=getheight(p[sig[0]][1],p,num);
			int temp2=getheight(p[sig[1]][1],p,num);
			return 1+max(temp1,temp2);
		}
		else
				return 1;
}

	

int main()
{
		int n;
	  while(cin>>n)
	  {
		int **p=new int*[n-1];
		for(int i=0;i<n-1;i++)
			p[i]=new int[2];

		for(int i=0;i<n-1;i++)
				for(int j=0;j<2;j++)
						cin>>p[i][j];

		cout<<getheight(p[0][0],p,n);
	  }

		return 0;
}

