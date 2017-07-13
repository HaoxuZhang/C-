#include<iostream>
using namespace std;
int main()
{
int n;
int i,j;
cin>>n;
cin.get();
char c;
char words[1000][40];//用来存放单词，每行放一个单词
int wordLen[1000];//用来存放每个单词的长度
for(i=0;i<n;i++)//将每个单词放入words二维数组中，每行放置一个单词，将每个单词的长度放入wordLen数组中
   {
   for(j=0;j<40;j++)
      {
      cin.get(c);
      if(c!=' '&&c!='\n')
         words[i][j]=c;
      else
         {
         wordLen[i]=j;
         break;
         }
      }
   }
int length=wordLen[0];
cout<<words[0];
for(i=1;i<n;i++)
   {
   if(length+1+wordLen[i]<=80)//如果前面的单词长度+一个字符的空格+目前的单词长度小于等于80,那么就放在同一行输出，并重新赋值前面的单词长度之和
      {
      cout<<' '<<words[i];
      length=length+1+wordLen[i];
      }
   else//否则先换行再让单词输出
      {
      cout<<endl<<words[i];
      length=wordLen[i];
      }
   }
return 0;
}
