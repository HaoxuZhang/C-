#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int all[n];//该数组存放所有样本
int i=0;
for(i=0;i<n;i++)
   cin>>all[i];
double walktime=0,biketime=0;//定义walktime为行走所花时间,biketime为骑车所花时间
for(i=0;i<n;i++)//用该循环分别判断数组中的距离用什么方式花时间少
   {
   walktime=all[i]/(1.2);
   biketime=all[i]/3+27+23;
   if(walktime<biketime)
      cout<<"Walk"<<endl;
   else if(walktime>biketime)
      cout<<"Bike"<<endl;
   else if(walktime==biketime)
      cout<<"All"<<endl;
   }
return 0;
}
