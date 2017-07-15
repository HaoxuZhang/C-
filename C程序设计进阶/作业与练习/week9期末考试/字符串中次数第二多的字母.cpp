#include<iostream>
using namespace std;
void daxie(char in[])//全部换成大写
{
int i=0,k=0;
while(*(in+k)!='\0')
   k++;
for(i=0;i<k;i++)
   {
   if(*(in+i)>='a'&&*(in+i)<='z')
      *(in+i)=*(in+i)-32;
   }
}
void shuzi(char in[],int out[])//将数组中的大写字母全部对应到0到26个数字的数组中
{
int i=0,k=0;
while(*(in+k)!='\0')
   k++;
for(i=0;i<k;i++)
   {
   if(*(in+i)>='A'&&*(in+i)<='Z')
      (*(out+*(in+i)-65))++;
   }
}
int sec(int in[])//找出数组中的出现次数第二多的数量
{
int i=0,max=0,second=0;
for(i=0;i<26;i++)
   {
   if(max<*(in+i))
      max=*(in+i);
   }
for(i=0;i<26;i++)
   {
   if(max==*(in+i))
      *(in+i)=0;
   }
for(i=0;i<26;i++)
   {
   if(second<*(in+i))
      second=*(in+i);
   }
return second;
}
char secys(int second,int in1[],char in2[])//找出出现第二多的元素是那个大写字母
{
char out[26]="@";
int i=0,j=0,k=0,q=0;
for(i=0;i<26;i++)//若有多个元素为第二多的元素，那应当输出第一个输入的元素
   {
   if(second==*(in1+i))
      {
      out[q]=i+65;
      q++;
      }
   }
while(*(in2+k)!='\0')//k为输入数组的长度
   k++;
bool flag=false;
for(i=0;i<k;i++)//该循环会找出第一个输入的第二多元素，找到后，循环终止，返回那个元素
   {
   for(j=0;j<q;j++)
      {
      if(in2[i]==out[j])
         {
         bool flag=true;
         return out[j];
         break;
         }
      if(flag)
         break;
      }
   }
}
int main()
{
char a[500]="A";
cin>>a;
daxie(a);
int b[26]={0};
shuzi(a,b);
int second=sec(b);
char c=secys(second,b,a);
cout<<c<<"+"<<char(c+32)<<":"<<second<<endl;
return 0;
}
