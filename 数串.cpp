#include<iostream>
using namespace std;

int compare(int p,int q,int *a)
{
		int m=a[p];
		int n=a[q];
        int x,y;
		if(m<9)
				x=n*10+m;
		else if(m<99)
			    x=n*100+m;
		else
				x=n*1000+m;

		if(n<9)
				y=m*10+n;
		else if(n<99)
			    y=m*100+n;
		else
				y=m*1000+n;
		if(x>y)
				return 1;
		else
				return 0;
}


int main()
{
		int n;
		while(cin>>n)
		{
				int *a=new int[n];
				for(int i=0;i<n;i++)
						cin>>a[i];
				for(int i=0;i<n;i++)
						for(int j=1;j<n-i;j++)
						{
								if(compare(j-1,j,a)==0)
								{
										int temp=a[j];
										a[j]=a[j-1];
										a[j-1]=temp;
								}
						}
				for(int i=0;i<n;i++)
						cout<<a[i]<<" ";


		}
		return 0;
}
