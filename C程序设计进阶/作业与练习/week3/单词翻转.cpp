#include<iostream>
using namespace std;
void recur()
{
char c;
c=cin.get();
if(c!='\n')
   recur();
if(c==' ')
   cout<<' ';
cout<<c;
}
int main()
{
recur();
cout<<endl;
return 0;
}
