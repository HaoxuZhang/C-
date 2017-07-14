#include<iostream>
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int a[m][n];
int i,j;
for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
      cin>>a[i][j];
   }
for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
      {
      bool moutain=true;
      if(i-1>=0&&a[i][j]<a[i-1][j])
         moutain=false;
      if(j-1>=0&&a[i][j]<a[i][j-1])
         moutain=false;
      if(i<m-1&&a[i][j]<a[i+1][j])
         moutain=false;
      if(j<n-1&&a[i][j]<a[i][j+1])
         moutain=false;
      if(moutain)
         cout<<i<<" "<<j<<endl;
      }
   }
return 0;
}
