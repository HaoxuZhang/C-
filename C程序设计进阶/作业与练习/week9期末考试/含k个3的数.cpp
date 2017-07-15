#include<iostream>
#include<cmath>
using namespace std;
int weishu(int m)//该函数用来记录输入的整数有多少位
{
int num=0;
while(m!=0)
   {
   m=m/10;
   num++;
   }
return num;
}
int main()
{
int m,k;
cin>>m>>k;
bool flag1=false;
bool flag2=false;
int i=0,sumK=0;
int a=0;
if(m%19==0)
   flag1==true;
int sum=weishu(m);//用sum来记录m为几位数
for(i=sum-1;i>=0;i--)
   {
   a=m/pow(10,i);
   if(a==3)
      sumK++;
   m=m-a*pow(10,i);
   }
if(sumK==k)
   flag2=true;
if(flag1&&flag2)
   cout<<"YES"<<endl;
else if(flag1==false||flag2==false)
   cout<<"NO"<<endl;
return 0;
}
