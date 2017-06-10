#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;//n为学生数量
int scores[n];
int i=0;
for(i=0;i<n;i++)
  {
   cin>>scores[i];
  }
int highest=0;//highest为最高成绩
for(i=0;i<n;i++)//令highest的值与数组中的值一一比较，若小于等与数组中的值，则将数组中的值赋给highest，否则不变。
   {
    if(highest<=scores[i])
       highest=scores[i];
   }
cout<<highest<<endl;
return 0;
}
