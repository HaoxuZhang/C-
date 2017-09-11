#include<iostream>
using namespace std;
class A{
	public:
	static int count;
	A(){count++;cout<<"A structor"<<endl;}
	A(int i){count++;cout<<"A structor"<<endl;}
	~A(){count--;cout<<"A destructor"<<endl;}
	A(const A& a){}
};
class B:public A{
	public:

};
int A::count=0;
void func(A a){} 
int main(){
	A a1;
	cout<<A::count<<endl;
	A a2(5);
	cout<<A::count<<endl;
	func(a2);
	cout<<A::count<<endl;
	return 0;
}
