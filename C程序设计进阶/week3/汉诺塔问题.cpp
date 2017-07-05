#include<iostream>
using namespace std;
void move(int n,char x,char y,char z)
{
if(n!=1)
   {
   move(n-1,x,z,y);
   cout<<"将一个盘子从"<<x<<"移动到"<<z<<endl;
   move(n-1,y,x,z);
   }
else if(n==1)
   cout<<"将一个盘子从"<<x<<"移动到"<<z<<endl;
}
int main()
{
int m;
cout<<"请输入盘子数量m=";
cin>>m;
move(m,'A','B','C');
return 0;
}
