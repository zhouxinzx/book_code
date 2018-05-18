#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int a[128]={0};
	int b[128]={0};
	int flag=0;
	if(s1.size()==s2.size())
	{
		for(int i=0;i<s1.size();i++)
		{
			int p=(int)s1[i];
			int q=(int)s2[i];
			a[p]++;
			b[q]++;
		}

		for(int i=0;i<128;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
				cout<<"false"<<endl;
				break;
			}
		}
		if(flag==0)
			cout<<"true"<<endl;
	}
	else
		cout<<"false"<<endl;
	return 0;
}
