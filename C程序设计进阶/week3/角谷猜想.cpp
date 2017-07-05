#include<iostream>
using namespace std;
void input(int n)
{
if((n%2==0)&&(n/2!=1))
   {
   cout<<n<<"/2="<<n/2<<endl;
   input(n/2);
   }
if((n%2==0)&&(n/2==1))
   cout<<n<<"/2=1"<<endl<<"End"<<endl;
if(n%2!=0&&n!=1)
   {
   cout<<n<<"*3+1="<<(n*3+1)<<endl;
   input(n*3+1);
   }
if(n==1)
   cout<<"End"<<endl;
}
int main()
{
int m;
cin>>m;
input(m);
return 0;
}
