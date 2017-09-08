#include<iostream>
using namespace std;
class Number{
	public:
		int num;
		Number(int n=0):num(n){}
		//在此处补充你的代码
		int operator*(Number& n){
			return num*n.num;
		}
		operator int(){
			return num;
		}
		//结束代码
};
int main(){
	Number n1(10),n2(20);
	Number n3;
	n3=n1*n2;//由于定义了强制类型转换函数，所以在这句话在编译时，左边的会返回那个对象的num，并且将右边的int赋值给n3的num
	cout<<int(n3)<<endl;
	return 0;
}
