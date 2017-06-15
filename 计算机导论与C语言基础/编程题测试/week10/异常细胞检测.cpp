#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;
int a[n][n]={0};
int i=0,j=0;
for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
      {
      cin>>a[i][j];
      }
   }
int num=0;//num用来记录异常细胞数目
for(i=1;i<n-1;i++)
   {
   for(j=1;j<n-1;j++)
      {
      if((a[i-1][j]-a[i][j]>=50)&&(a[i+1][j]-a[i][j]>=50)&&(a[i][j-1]-a[i][j]>=50)&&(a[i][j+1]-a[i][j]>=50))
         {
         num++;
         }
      }
   }
cout<<num<<endl;
return 0;
}
