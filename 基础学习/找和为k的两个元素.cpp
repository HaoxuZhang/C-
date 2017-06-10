#include<iostream>
using namespace std;
int main()
{
int n=0,k=0;
cin>>n>>k;
int all[n];
int i=0;
for(i=0;i<n;i++)
   cin>>all[i];
int j=0;
int judgement=0;//judgement为判断变量
for(i=0;i<n;i++)//用两个循环来判断是否存在，若存在，令judgement=1,并且终止循环
   {
   for(j=i+1;j<n;j++)
      {
      if((all[i]+all[j])==k)
         {
         judgement=1;
         break;
         }
      }
   }
//之后根据judgement的值来判断是否存在
if(judgement==1)
   cout<<"yes"<<endl;
else if(judgement==0)
   cout<<"no"<<endl;
return 0;
}
