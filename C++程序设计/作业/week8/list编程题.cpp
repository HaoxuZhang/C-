#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.get();
	string str[n];
	char a[20];
	list<int>* p[200];
	for(int i=0;i<n;i++)
	{
		cin.getline(a,20);
		str[i]=string(a);
	}
	for(int i=0;i<n;i++)
	{
		if(str[i].substr(0,3)=="new")
		{
			p[str[i][4]-'0']=new list<int>;
		}
		else if(str[i].substr(0,3)=="add")
		{
			p[str[i][4]-'0']->push_back(str[i][6]-'0');
		}
		else if(str[i].substr(0,3)=="out")
		{
			p[str[i][4]-'0']->sort();
			list<int>::iterator j;
			for(j=p[str[i][4]-'0']->begin();j!=p[str[i][4]-'0']->end();j++)
				cout<<*j<<" ";
			cout<<endl;
		}
		else if(str[i].substr(0,5)=="merge")
		{
			p[str[i][6]-'0']->merge(*(p[str[i][8]-'0']));
		}
		else if(str[i].substr(0,6)=="unique")
		{
			p[str[i][7]-'0']->unique();
		}
	}
	return 0;
}
