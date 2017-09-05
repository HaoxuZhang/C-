#include<iostream>
using namespace std;
template<class T>
void swap1(T& m,T& n){
	T tmp=m;
	m=n;
	n=tmp;
}
int main(){
	int m,n;
	cin>>m>>n;
	swap1(m,n);
	cout<<m<<" "<<n<<endl;
	return 0;
}
