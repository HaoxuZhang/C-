
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int m;
float n;
cin>>m>>n;
int num[50];
int numPat[50];
float degree[50];
float degreePat[50];
int i,j,k;
k=0;
bool flag=false;
for(i=0;i<m;i++)
   {
   cin>>num[i];
   cin>>degree[i];
   }
for(i=0;i<m;i++)//将需要进入严重病房的病人编号和严重程度分别放入numPat和degreePat数组中，用j记录数组下标
   {
   if(degree[i]>=n)
      {
      degreePat[k]=degree[i];
      numPat[k]=num[i];
      k++;
      flag=true;
      }
   }
for(i=0;i<k-1;i++)//将严重程度由大到小排序，对应的病人编号也相应排序
   {
   for(j=i+1;j<k;j++)
      {
      if(degreePat[i]<degreePat[j])
         {
         float temp1;
         int temp2;
         temp1=degreePat[i];
         degreePat[i]=degreePat[j];
         degreePat[j]=temp1;
         temp2=numPat[i];
         numPat[i]=numPat[j];
         numPat[j]=temp2;
         }
      }
   }
if(flag==true)
   {
   for(i=0;i<k;i++)
      cout<<setw(3)<<setfill('0')<<numPat[i]<<" "<<fixed<<setprecision(1)<<degreePat[i]<<endl;
   }
else
   cout<<"None"<<endl;
return 0;
}
