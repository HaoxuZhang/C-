#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int id[n];
int i,j;
int initial=0,end=0;
double rate[n];
for(i=0;i<n;i++)
   {
   cin>>id[i]>>initial>>end;
   rate[i]=(double)(end/initial);
   }
for(i=0;i<n-1;i++)//将rate数组从大到小排序，其所对应的id数组也相应排序
   {
   for(j=i+1;j<n;j++)
      {
      if(rate[i]<rate[j])
         {
         int tmpId=0;
         tmpId=id[i];
         id[i]=id[j];
         id[j]=tmpId;
         double tmpRate=0;
         tmpRate=rate[i];
         rate[i]=rate[j];
         rate[j]=tmpRate;
         }
      }
   }
double maxDiff=0;//最大差距
int maxDiffIndex=0;//最大差距的位置下标
for(i=0;i<n-1;i++)//找出最大差距的位置，即为A和B细菌器皿的分界位置，即该下标前全为A，之后全为B
   {
   int diff=rate[i]-rate[i+1];
   if(maxDiff<diff)
      {
      maxDiff=diff;
      maxDiffIndex=i;
      }
   }
cout<<maxDiffIndex+1<<endl;
for(i=maxDiffIndex;i>=0;i--)
   {
   cout<<id[i]<<endl;
   }
cout<<n-(maxDiffIndex+1)<<endl;
for(i=n-1;i>maxDiffIndex;i--)
   cout<<id[i]<<endl;
return 0;
}
