#include<iostream>
using namespace std;
int main()
{
int a,b,c;
char f,g;
cin>>a>>f>>b>>g>>c;
if(a*b==c)
   cout<<"*"<<endl;
else if(float(a/b)==c)
   cout<<"/"<<endl;
else if(a+b==c)
   cout<<"+"<<endl;
else if(a-b==c)
   cout<<"-"<<endl;
else if(a%b==c)
   cout<<"%"<<endl;
else
   cout<<"error"<<endl;
return 0;
}
