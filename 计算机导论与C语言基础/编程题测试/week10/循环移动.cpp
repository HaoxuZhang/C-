#include<iostream>
using namespace std;
int main()
{
int n=0,m=0,i=0;
cin>>n>>m;
int a[n+m];
for(i=0;i<n;i++)
   cin>>a[i];
for(i=0;i<n-m;i++)//该题实际上就是将前面n-m个数移动到数组最后面。该循环将前n-m个数放置到数组的最后面
   {
   a[n+i]=a[i];
   }
for(i=0;i<n;i++)//该循环将n-m个数后面的顺序正确的n个数提到数组的前面
   {
   a[i]=a[n-m+i];
   }
for(i=0;i<n;i++)//该循环将数组输出
   {
   if(i==n-1)
      cout<<a[i]<<endl;
   else
      cout<<a[i]<<" ";
   }
return 0;
}
