#include<iostream>
using namespace std;

int min(int m,int n)
{
	if(m>n)
		return n;
	else
		return m;
}
int main()
{
	int a[4][4]={1,3,5,9,8,1,3,4,5,0,6,1,8,8,4,0};
	int dp[4][4]={0};
	dp[0][0]=a[0][0];
	for(int i=1;i<4;i++)
	{
		dp[i][0]=dp[i-1][0]+a[i][0];
		dp[0][i]=dp[0][i-1]+a[0][i];
	}
	for(int i=1;i<4;i++)
		for(int j=1;j<4;j++)
		{
			dp[i][j]=min(dp[i-1][j],dp[i][j-1])+a[i][j];

		}
	cout<<dp[3][3]<<endl;
}
