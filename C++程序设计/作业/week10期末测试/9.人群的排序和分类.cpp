#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
//在此处补充你的代码
class A{
	char s;
	int age;
	public:
	A(int k,char c='A'):s(c),age(k){}
	friend void Print(const A* a);
	friend class Comp;
};
class B:public A{
	public:
	B(int k):A(k,'B'){}
};
void Print(const A* a){
	cout<<a->s<<a->age<<endl;
}
class Comp{
	public:
		bool operator()(const A* a1,const A* a2){
			if(a1->age<a2->age) return true;
			return false;
		}
};
//在次结束代码
int main()
{
	int t;
	cin>>t;
	set<A*,Comp> ct;
	while(t--){
		int n;
		cin>>n;
		ct.clear();
		for(int i=0;i<n; ++i){
			char c;int k;
			cin>>c>>k;
			if(c=='A')
				ct.insert(new A(k));
			else
				ct.insert(new B(k));
		}
		for_each(ct.begin(),ct.end(),Print);
		cout<<"****"<<endl;
	}
	return 0;
}
