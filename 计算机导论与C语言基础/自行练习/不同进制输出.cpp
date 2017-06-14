#include<iostream>
using namespace std;
int main()
{
int a=-123;//计算机储存的二进制数是123原码的取反并+1,并且开头以1表示负数
cout<<hex<<a<<endl;//hex表述输出十六进制数
cout<<oct<<a<<endl;//oct表示输出八进制数
cout<<a<<endl;//若不更改，计算机会默认上一个进制数来输出
cout<<dec<<a<<endl;//dec表示输出十进制数
return 0;
}
