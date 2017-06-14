#include<iostream>
using namespace std;
int main()
{
int x=0,y=0,result=0;
char c='a';
cin>>x>>y>>c;
if((y==0)&&(c=='/'))
   cout<<"Divided by zero!"<<endl;
else
   {
   switch(c)
      {
      case '/':result=x/y;cout<<result<<endl;break;
      case '*':result=x*y;cout<<result<<endl;break;
      case '+':result=x+y;cout<<result<<endl;break;
      case '-':result=x-y;cout<<result<<endl;break;
      default:cout<<"Invalid operator!"<<endl;
      }
   }
return 0;
}
