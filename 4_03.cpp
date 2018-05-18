#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p[n+1];
	for(int i=0;i<n+1;i++)
		p[i]=-1;
	p[2]=1;
	p[3]=1;
	p[4]=2;
	p[5]=1;
	for(int i=6;i<n+1;i++)
	{
		if(p[i-5]!=-1)
			p[i]=p[i-5]+1;
		else
		{
			if(p[i-3]!=-1)
				p[i]=p[i-3]+1;
			else
			{
				if(p[i-2]!=-1)
					p[i]=p[i-2]+1;
				else
					p[i]=-1;
			}
		}
	}
	cout<<p[n]<<endl;
}
