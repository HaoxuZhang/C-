#include<iostream>
using namespace std;
int cut(int n)
{
if(n==0)
   return 1;
else
   return(cut(n-1)+n);
}
int main()
{
int n;
cin>>n;
cout<<cut(n)<<endl;
return 0;
}
