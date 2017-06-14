#include<iostream>
using namespace std;
int main()
{
   int a=0xFFFFFF85;//0x后面表示十六进制数
   cout<<dec<<a<<endl;
   cout<<oct<<a<<endl;
   int b=037777777605;//0后面表示八进制数
   cout<<dec<<b<<endl;
   cout<<hex<<b<<endl;
   return 0;
}
