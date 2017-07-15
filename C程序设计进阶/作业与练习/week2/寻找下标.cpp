#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;
int a[n];
int i=0;
for(i=0;i<n;i++)
   cin>>a[i];
int flag=0;
int flagnum=0;
for(i=0;i<n;i++)
   {
   if(a[i]==i)
      {
      flag=1;
      flagnum=a[i];
      break;
      }
   }
if(flag==1)
   cout<<flagnum<<endl;
else
   cout<<"N"<<endl;
return 0;
}
