#include<iostream>
using namespace std;
class MyInt
{
int nVal;
public:
MyInt(int n){nVal=n;}
int ReturnVal(){return nVal;}
//在此处补充你的代码
MyInt& operator-(int i)
{
nVal-=i;
return *this;
}
};
int main()
{
MyInt objInt(10);
objInt-2-1-3;
cout<<objInt.ReturnVal();
cout<<",";
objInt-2-1;
cout<<objInt.ReturnVal();
return 0;
}


//分析：在main函数中，MyInt类的对象可以直接减去整型，说明在MyInt类中缺少了对运算符-的重载函数
