#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class myrules1{
	public:
	bool operator()(int a,int b){
	if(a>b) return true;
	return false;}
};
class myrules2{
	public:
	bool operator()(int a,int b){
	if(a<b) return true;
	return false;}
};
int main(){
	priority_queue<int,vector<int>,myrules1> a;
	priority_queue<int,vector<int>,myrules2> b;
	a.push(2);
	a.push(3);
	b=a;
}
