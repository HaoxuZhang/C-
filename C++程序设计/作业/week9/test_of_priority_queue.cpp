#include<iostream>
#include<queue>
using namespace std;
class myrules{
	public:
	bool operator()(int i,int j){
	if(i%10<j%10) return true;
	return false;}
};
int main(){
	typedef vector<int> VECTOR;
	priority_queue<int,VECTOR,myrules > a;
	a.push(15);
	a.push(23);
	a.push(7);
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();
	}
	cout<<endl;
}
