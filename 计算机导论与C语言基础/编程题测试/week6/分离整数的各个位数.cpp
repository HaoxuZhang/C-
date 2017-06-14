#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;
int a=0,b=0,c=0;//a为百位，b为十位，c为各位
a=n/100;//a，b,c都为int型，故保留整数部分
b=(n-a*100)/10;
c=n-a*100-b*10;
cout<<a<<endl<<b<<endl<<c<<endl;
return 0;
}
