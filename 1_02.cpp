#include<iostream>
#include<stack>
using namespace std;

class Queue
{
	private:
		stack <int>s1,s2;
	public:
		void q_push(int n);
		void q_pop();
		int q_top();
};

void Queue::q_push(int n)
{
	s1.push(n);
}

void Queue::q_pop()
{
	if(s1.empty())
		cout<<"error"<<endl;
	else
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		s2.pop();
		while(!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}
}

int Queue::q_top()
{
	if(s1.empty())
	{
		cout<<"error"<<endl;
		return 0;
	}
	else
	{
		int top=0;
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		top=s2.top();
		while(!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
		return top;
	}
}

int main()
{
	Queue q;
	int n;
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		else if(n==-2)
			cout<<q.q_top()<<endl;
		else if(n==0)
			q.q_pop();
		else
			q.q_push(n);
	}
	return 0;
}

