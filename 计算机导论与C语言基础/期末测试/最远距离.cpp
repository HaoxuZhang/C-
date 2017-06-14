#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n=0;
cin>>n;
double a[n][2];
int i=0,j=0;
for(i=0;i<n;i++)
   {
   for(j=0;j<2;j++)
      cin>>a[i][j];
   }
double maxdis=0;
for(i=0;i<n;i++)
   {
   for(j=i+1;j<n;j++)
      {
      double dis=0;
      dis=sqrt(pow((a[i][1]-a[j][1]),2)+pow((a[i][2]-a[j][2]),2));
      if(maxdis<=dis)
         maxdis=dis;
      }
   }
cout<<fixed<<setprecision(4)<<maxdis<<endl;
return 0;
}
