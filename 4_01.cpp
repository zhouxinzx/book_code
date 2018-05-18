#include<iostream>
#include<string>
using namespace std;

int getf(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return getf(n-1)+getf(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<getf(n)<<endl;
	return 0;
}
