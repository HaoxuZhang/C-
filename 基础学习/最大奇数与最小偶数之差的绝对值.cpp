#include<iostream>
using namespace std;
int main()
{
int all[6];
int i=0;
for(i=0;i<6;i++)
   cin>>all[i];
int odd[6],even[6];//分别设置存放奇数和存放偶数的数组
int m=0;
int n=0;
for(i=0;i<6;i++)//若为奇数放在odd数组，若未偶数放在even数组
   {
   if(all[i]%2!=0)
      {
      odd[m]=all[i];
      m++;
      }
   else if(all[i]%2==0)
      {
      even[n]=all[i];
      n++;
      }
   }
int max=0,min=100;//max为最大奇数，min为最小偶数,由于输入的为0到100之间的正整数，故先令max=0,令min=100
for(i=0;i<m;i++)
   {
   if(max<=odd[i])
      max=odd[i];
   }
for(i=0;i<n;i++)
   {
   if(min>=even[i])
      min=even[i];
   }
int x=0,y=0;
x=max-min;
y=min-max;
if(x<0)
   cout<<y<<endl;
else
   cout<<x<<endl;
return 0;
}
