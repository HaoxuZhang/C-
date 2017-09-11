#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,k=0;
		cin>>n>>i>>j;
		int dex=n&(1<<i);//获取第i位数字
		k=k|dex;//将k的第i位确定
		dex=n&(1<<j);//获取第j位数字
		dex=dex^(1<<j);//取反
		k=k|dex;//将k的第j位确定
		for(int m=i+1;m<j;m++){
			k=k|(1<<m);//将中间的位置变为1
		}
		cout<<hex<<k<<endl;
	}
	return 0;
}
