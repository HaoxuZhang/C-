#include<iostream>
#include<string.h>
using namespace std;
char str[110]={};
int n=0;
void pp()
{
int i,j;
bool flag=true;
for(i=0;i<n;i++)
   {
   if(str[i]=='(')
      {
      for(j=i+1;j<n;j++)
         {
         if(str[j]=='(')
            break;//如果遇到两个左括号，循环结束
         if(str[j]==')')//遇到中间没有括号的两个左右括号，则去掉他们
            {
            str[i]=' ';
            str[j]=' ';
            flag=false;
            break;
            }
         }
      }
   if(flag==false)//若成功消除一对括号，终止循环
      break;
   }
if(flag==false)//若上述循环成功找到匹配括号，则继续调用pp函数匹配括号，直到没有匹配的括号为止
   pp();
}
int main()
{
while(cin>>str)
{
int i;
n=strlen(str);
cout<<str<<endl;
pp();
for(i=0;i<n;i++)//将所有不是括号的字符换成空格，左右括号分别换成相应字符
   {
   if(str[i]=='(')
      str[i]='$';
   else if(str[i]==')')
      str[i]='?';
   else
      str[i]=' ';
   }
cout<<str<<endl;
}
return 0;
}
