#include<iostream>
#include<cmath>
#include<set>
#include<stdlib.h>
#include<string.h>
using namespace std;
int zhishu(int n){//该函数用来求质因数的数量
	int num=0;
	int len=n;
	int p[len]={0};
	for(int i=2;i<=sqrt(n);i++){
		for(int j=2*i;j<len;j=j+i){
			if(p[j]==0) p[j]=1;
		}
	}
	for(int i=2;i<len;i++)
	{
		if(p[i]==0&&n%i==0) num++;
	}
	return num;
}
class myrules{//设定自己的比较函数
	public:
	bool operator()(int a,int b){
		if(zhishu(a)>zhishu(b)) return true;
		else if(zhishu(a)==zhishu(b)){
			if(a>b) return true;
			else return false;
		}
		return false;
	}
};
int main(){
	multiset<int,myrules> a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<10;j++){
			int num;
			cin>>num;
			a.insert(num);
		}
		multiset<int,myrules>::iterator p;
		p=a.begin();
		cout<<*p<<" ";
		a.erase(p);
		p=a.end();
		p--;
		cout<<*p<<endl;
		a.erase(p);
	}
	return 0;
}
