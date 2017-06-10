#include<iostream>
using namespace std;
int main()
{
int h=0,r=0,b=0;//b是至少要喝水的桶数
cin>>h>>r;
double a=0;//a表示这个桶的体积，单位为立方厘米
a=3.14159*r*r*h;
int n=0;
n=20000/a;
if(n==20000/a)//如果喝水的桶数为整数
   {
   b=n;
   cout<<b<<endl;
   }
else if(n<(20000/a))//如果喝水桶数不为整数，则之前定义的n为int型，将20000/a的值赋给n后，n只取整数部分，那么n的值一定小于20000/a的值
   {
   b=n+1;
   }
cout<<b<<endl;
return 0;
}
