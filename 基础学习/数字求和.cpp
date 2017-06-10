#include<iostream>
using namespace std;
int main()
{
int all[6];//输入的数组
int i=0;
for(i=0;i<6;i++)
   cin>>all[i];
int plus[6];//将需要求和的数放进plus数组中
int n=0;//n为plus数组的计数变量
for(i=1;i<6;i++)//该循环语句将需要求和的数放进plus数组中，并且该数组中有n个数
   {
   if(all[i]<all[0])
      {
      plus[n]=all[i];
      n++;
      }
   }
int m=0;
for(i=0;i<n;i++)//该循环将数组中的数相加
   {
   m=m+plus[i];
   }
cout<<m<<endl;
return 0;
}
