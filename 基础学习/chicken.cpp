#include<iostream>
using namespace std;
int main()//百元买百只鸡，小鸡5角，公鸡2元，母鸡3元
{
int a,b,c;//a为小鸡数量，b为公鸡数量，c为母鸡数量
for(a=0;a<=100;a++)
for(b=0;b<=100;b++)
for(c=0;c<=100;c++)//穷举法
  {
  if(((0.5*a+2*b+3*c)==100)&&((a+b+c)==100))//若满足这两个方程式
    cout<<"小鸡"<<a<<"公鸡"<<b<<"母鸡"<<c<<endl;//则输出各种鸡的数量
  }
return 0;
}
