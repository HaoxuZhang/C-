#include<iostream>
using namespace std;
int main()
{
int n,x,y;
cin>>n>>x>>y;
int a=0;//a为剩余苹果的数量
if(y%x==0)//如果y能被x整除，说明在这段时间内，虫子正好完整的吃完y/x个苹果
   {
   a=n-y/x;
   }
else//如果y不能x被整除，说明这段时间内，虫子吃得苹果数量不是整数
   {
   int b=0;//int型变量会自动去掉小数部分取整数部分，则被虫子咬的苹果数量为b+1个，那么剩余的完整苹果数量为n-(b+1)个
   b=y/x;
   a=n-(b+1);
   }
cout<<a<<endl;
return 0;
}
