//描述

//有一个小型的报账系统，它有如下功能：

//（1）统计每个人所报发票的总钱数

//（2）统计每类发票的总钱数

//将此系统简化为如下：假设发票类别共有A、B、C三种;一共有三个人，ID分别为1、2、3。 
//输入

//系统输入包含三行，每行第一个数为人员ID（整型，1或2或3），第二个数为发票总张数(张数不超过100)，之后是多个发票类别（字符型，A或B或C）和相应发票金额（单进度浮点型,不超过1000.0）。
//输出

//输出包含六行，前三行为每人（按ID由小到大输出）所报发票总钱数（保留两位小数），后三行为每类发票的总钱数（保留两位小数）。 
//样例输入

//1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1
//3 3 B 1 C 2 C 1
//2 4 B 1 A 1 C 1 A 1

//样例输出

//1 6.00
//2 4.00
//3 4.00
//A 5.00
//B 3.00
//C 6.00
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int i=0,j=0;
int x[3]={0};
float sumA=0,sumB=0,sumC=0;
float people[3]={0};
for(i=0;i<3;i++)
   {
   cin>>x[i];
   int n=0;
   cin>>n;
   char y[n];
   float z[n];
   for(j=0;j<n;j++)
      {
      cin>>y[j];
      cin>>z[j];
      people[i]=people[i]+z[j];//people[i]用来存放每人的发票总钱数,对所有的数组z中的数求和即为当前输入的人员的发票总钱数
      if(y[j]=='A')//对每个字符所对应的z数组中的金钱数进行求和相加
         sumA=sumA+z[j];
      if(y[j]=='B')
         sumB=sumB+z[j];
      if(y[j]=='C')
         sumC=sumC+z[j];
      }
   }
float exchange=0;
for(i=0;i<2;i++)
//该循环的意义在于，输入的人员ID并不是按照123的顺序排列的，
//而输出是按照123排列的，所以将输入的x[]进行123排列的同时，也要将其对应的people[]进行相应的排列
   {
   for(j=i+1;j<3;j++)
      {
      if(x[i]>x[j])
         {
         exchange=people[i];
         people[i]=people[j];
         people[j]=exchange;
         }
      }
   }
cout<<"1 "<<fixed<<setprecision(2)<<people[0]<<endl<<"2 "<<people[1]<<endl<<"3 "<<people[2]<<endl<<"A "<<sumA<<endl<<"B "<<sumB<<endl<<"C "<<sumC<<endl;
return 0;
}

























