#include<iostream>
using namespace std;
int main()
{
int n,i=0,j=0,exchange=0;//n为输入个数，exchange为作为交换的第三个量
while((cin>>n)!=0)
{
int a[n]={0};
for(i=0;i<n;i++)
   {
   cin>>a[i];
   }
for(i=0;i<n-1;i++)//该循环将每个数依次与后面的数做比较，如果比后面的数大，就与其交换位置
   {
   for(j=i+1;j<n;j++)
      {
      if(a[i]>a[j])
         {
         exchange=a[i];
         a[i]=a[j];
         a[j]=exchange;
         }
      }
   }
int median=0;//median为中位数
if(n%2==0)
   {
   median=(a[n/2-1]+a[n/2])/2;
   }
else
   median=a[n/2];
cout<<median<<endl;
}
return 0;
}
