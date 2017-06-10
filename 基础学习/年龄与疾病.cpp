#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n=0;//n为病人数量
cin>>n;
int all[n];//all数组用来存放n个病人的患病年龄
int i=0;
for(i=0;i<n;i++)//输入数组all
cin>>all[i];
int first[n],second[n],third[n],forth[n];//这四个数组分别用来存放四个年龄段的数组
int a=0,b=0,c=0,d=0;//a,b,c,d分别用来计数四个数组
for(i=0;i<n;i++)
   {
   if((all[i]>=1)&&(all[i]<=18))
      {
      first[a]=all[i];
      a++;
      }
   else if((all[i]>=19)&&(all[i]<=35))
      {
      second[b]=all[i];
      b++;
      }
   else if((all[i]>=36)&&(all[i]<60))
      {
      third[c]=all[i];
      c++;
      }
   else if(all[i]>60)
      {
      forth[d]=all[i];
      d++;
      }
   else if(all[i]==60)
      {
      third[c]=all[i];
      forth[d]=all[i];
      c++;
      d++;
      }
   }
float w=0,x=0,y=0,z=0;
w=(a/n)*100;
x=b/n;
y=c/n;
z=d/n;
cout<<fixed<<setprecision(2)<<w<<"%"<<endl;
cout<<fixed<<setprecision(2)<<x<<endl;
cout<<x<<endl;
cout<<z<<endl;
return 0;
}
