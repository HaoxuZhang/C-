#include<iostream>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
int a[3]={3,5,7};
int b[3]={0};
int j=0;//j是数组b的计数变量
int i=0;
for(i=0;i<3;i++)//若输入的n可以被数组a中的数整除，那么就将该数放入数组b，最后将数组b中的数输出即可
   {
   if(n%a[i]==0)
      {
      b[j]=a[i];
      j++;
      }
   }
for(i=0;i<j;i++)
   cout<<b[i]<<" ";
if((b[0]==0)&&(b[1]==0)&&(b[2]==0))
//若数组b没有被数组a中的任何数赋值
//说明输入n不能被3.5.7中的任何数整除，则数组b仍未初始值
   cout<<"n"<<endl;
}
return 0;
}
