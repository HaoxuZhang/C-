#include<iostream>
using namespace std;
//在此处补充你的代码
class CType{
	int val;
	public:
	void setvalue(int n){val=n;}
	CType(){}
	friend ostream& operator<<(ostream& o,CType& a){
		o<<a.val;
		return o;
	}
	CType& operator++(int){
		static CType tmp;//由于该函数返回值类型是对象的引用，即返回其地址，因此必须用静态变量，否则函数结束时释放内存，地址就无效了
		tmp.setvalue(val);
		val*=val;
		return tmp;
	}
};
int main(int argc,char* argv[]){
	CType obj;
	int n;
	cin>>n;
	while(n){
		obj.setvalue(n);
		cout<<obj++<<" "<<obj<<endl;
		cin>>n;
	}
	return 0;
}
