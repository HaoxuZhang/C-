#include<iostream>
using namespace std;
template<class T>
T MaxElement(T a[],int size){
	T max=a[0];
	for(int i=1;i<size;i++)
		if(max<a[i]) max=a[i];
	return max;
}
int main(){
	double a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<MaxElement(a,5)<<endl;
}
