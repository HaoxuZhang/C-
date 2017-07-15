#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n][2];
int i,j;
int temp1,temp2;
for(i=0;i<n;i++)
   {
   for(j=0;j<2;j++)
      {
      cin>>a[i][j];
      }
   }
for(i=0;i<n-1;i++)//现将数组按照横坐标从小到大排序
   {
   for(j=i+1;j<n;j++)
      {
      if(a[i][0]>a[j][0])
         {
         temp1=a[i][0];
         a[i][0]=a[j][0];
         a[j][0]=temp1;
         temp2=a[i][1];
         a[i][1]=a[j][1];
         a[j][1]=temp2;
         }
      }
   }
int b[n]={0};
for(i=0;i<n;i++)//若不是极大点，b数组中对应的元素会变成1,则b数组中为0的元素的坐标就是极大点位于a数组中的行坐标
   {
   for(j=0;j<n;j++)
      {
      if((a[i][0]<=a[j][0]&&a[i][1]<a[j][1])||(a[i][0]<a[j][0]&&a[i][1]<=a[j][1]))
         b[i]=1;
      }
   }
int sum=0;//sum用来记录b数组中共有多少个0,即有多少个极大点
for(i=0;i<n;i++)
   {
   if(b[i]==0)
      sum++;
   }
int k=0;//k用来记录已经输出了多少个极大点
for(i=0;i<n;i++)
   {
   if(b[i]==0)
      {
      k++;
      if(k!=sum)
         cout<<"("<<a[i][0]<<","<<a[i][1]<<")"<<",";
      else if(k==sum)//当将要输出的已经是最后一个极大点了，那么就不再输出逗号了
         cout<<"("<<a[i][0]<<","<<a[i][1]<<")"<<endl;
      }
   }
return 0;
}
