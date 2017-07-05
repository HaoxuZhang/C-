#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,k;
cin>>n;
char a[n][n];
for(i=0;i<n;i++)
   cin>>a[i];
cin>>m;
int num=0;//患病人数num
for(k=0;k<m;k++)
{
for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
      {
      if(a[i][j]=='!')
         a[i][j]='@';
      }
   }
for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
      {
      if(a[i][j]='@')
         {  
                    if(i-1>=0&&a[i-1][j]=='.')       //上  
                       a[i-1][j]='!';  
                    if(i+1<n&&a[i+1][j]=='.')        //下  
                       a[i+1][j]='!';  
                    if(j-1>=0&&a[i][j-1]=='.')       //左  
                       a[i][j-1]='!';  
                    if(j+1<n&&a[i][j+1]=='.')        //右  
                       a[i][j+1]='!';  
         }  
      }
   }
}
for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
      {
      if(a[i][j]=='@')
         num++;
      }
   }
cout<<num<<endl;
return 0;
}
