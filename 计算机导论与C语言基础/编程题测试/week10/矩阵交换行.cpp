#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num[5][5]={0};
int i=0,j=0;
int n=0,m=0;
for(i=0;i<5;i++)
   {
   for(j=0;j<5;j++)
      cin>>num[i][j];
   }
cin>>n>>m;
int exchange[5]={0};//exchange作为用于交换n,m两行的临时数组
if((n>=0)&&(n<=4)&&(m>=0)&&(m<=4))
   {
   for(i=0;i<5;i++)
//先将n行的所有数值赋给exchange数组，再将m行的赋给n行，再将exchange赋给m行，完成n行与m行的数值的交换
      {
      exchange[i]=num[n][i];
      num[n][i]=num[m][i];
      num[m][i]=exchange[i];
      }
   for(i=0;i<5;i++)
//该循环将处理后的矩阵输出
      {
      for(j=0;j<5;j++)
         {
         if(j==4)
            cout<<setw(4)<<num[i][j]<<endl;//j==4时为每行的最后一列，此时需换行
         else
            cout<<setw(4)<<num[i][j];
         }
      }
   }
else
   cout<<"error"<<endl;
return 0;
}
