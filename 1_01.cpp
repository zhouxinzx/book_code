#include<iostream>
#include<stack>


using namespace std;
class Min_stack
{
	private:
		stack <int>s,s_min;
	public:
		void s_push(int n);
		void s_pop();
		int get_min();
};

void Min_stack::s_push(int n)
{
	s.push(n);
	if(s_min.empty())
		s_min.push(n);
	else
	{
		if(n<=s_min.top())
			s_min.push(n);
	}
}

void Min_stack::s_pop()
{
	if(s.empty())
		cout<<"error"<<endl;
	else
	{
		if(s.top()==s_min.top())
			s_min.pop();
		s.pop();
	}
}

int Min_stack::get_min()
{
	return s_min.top();
}
int main()
{
	Min_stack s;
	int n;
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		else if(n==-2)
			cout<<s.get_min()<<endl;
		else if(n==0)
			s.s_pop();
		else
			s.s_push(n);
	}
	return 0;
}






