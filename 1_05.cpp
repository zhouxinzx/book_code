#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack <int>s1,s2;
	int n=0;
	while(cin>>n)
		s1.push(n);
	while(!s1.empty())
	{
		int temp=s1.top();
		s1.pop();
		while(!s2.empty()&&s2.top()<=temp)
		{
			s1.push(s2.top());
			s2.pop();
		}
		s2.push(temp);
	}
	while(!s2.empty())
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
	return 0;
}
