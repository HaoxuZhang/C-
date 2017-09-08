#include<iostream>
using namespace std;
//在此处补充你的代码
template<class Pred>//需要定义一个函数模板，该模板的参数是一个函数名字
int sum(int a[],int n,Pred pred){
	int result=0;
	for(int i=0;i<n;i++)
		result+=pred(a[i]);
	return result;
}
int sqr(int n){return n*n;}
int main(){
	int t,n,a[0x100];
	cin>>t;
	for(int c=0;c<t;++c){
		cin>>n;
		for(int i=0;i<n;++i) cin>>a[i];
		cout<<sum(a,n,sqr)<<endl;
	}
	return 0;
}
