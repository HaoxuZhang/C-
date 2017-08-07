#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Complex
{
private:
double r,i;
public:
void Print()
{
cout<<r<<"+"<<i<<"i"<<endl;
}
//在此处补充你的代码
Complex& operator=(const char* s)
{
r=s[0]-48;
i=s[2]-48;
return *this;
}

};


int main()
{
Complex a;
a="3+4i";a.Print();
a="5+6i";a.Print();
return 0;
}


//分析：在main函数中，直接用字符串对Complex类的对象a进行赋值，说明在Complex类中，缺少了对赋值运算符的重载函数
