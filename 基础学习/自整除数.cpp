#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;
int j=0;
j=(n-10)+1;
//j为从10到n的所有需要处理的数的个数
//例如，n为15,那么需要处理10,11,12,13,14,15这6个数，j就等于6
int all[j];
int i=0;
for(i=0;i<j;i++)
   {
   all[i]=10+i;
   }
int aliquot[j];//aliquot为整除数放置的数组
int aliquotnumber=0;//aliquotnumber为aliquot的计数变量
for(i=0;i<j;i++)
   {
   int x=0,y=0;//x表示十位的数字，y表示个位的数字
   x=all[i]/10;
   y=all[i]-x*10;
   int m=0;
   m=x+y;//m表示该数的各个位数的数字相加和
   if(all[i]%m==0)
      {
      aliquot[aliquotnumber]=all[i];
      aliquotnumber++;
      }
   }
for(i=0;i<aliquotnumber;i++)
   cout<<aliquot[i]<<endl;
return 0;
}
