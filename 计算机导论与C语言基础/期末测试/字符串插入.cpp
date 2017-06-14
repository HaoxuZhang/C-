#include<iostream>
using namespace std;
int main()
{
char str[20],substr[4];
while(cin>>str>>substr)
{
int i=0;
int posBiggest=0;//posBiggest记录str数组中最大值字符的位置
char strBiggest=0;//strBiggest记录str数组中最大的字符所对应的ASC码的值
for(i=0;str[i]!='\0';i++)
//设计这样一个循环，依次检验str数组中的字符对应的ASC值是否为最大，并找出最大值所在的位置
   {
   if(str[i]>strBiggest)
      {
      posBiggest=i;
      strBiggest=str[i];
      }
   }
for(int j=9;j>posBiggest;j--)
//该循环将str中最大值后面的字符移动到三位后，为substr的插入腾出空位来
   {
   str[j+3]=str[j];
   }
for(i=0;i<3;i++)
//该循环将substr插入到str的最大值后面
   {
   str[posBiggest+i+1]=substr[i];
   }
cout<<str<<endl;
}
return 0;
}
