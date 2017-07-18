#include<iostream>
using namespace std;
class student
{
private:
char name[10];
int age,num,grade;
public:
void initName(char a[])//对名字初始化
   {
   int k;//k用来记录名字的字符数量
   int i=0;
   for(i=0;i<10;i++)
      {
      if(a[i]!='\0')
         {
         k++;
         }
      else 
         break;
      }
   for(i=0;i<k;i++)
      name[i]=a[i];
   name[k]='\0';
   }
void initAge(int age_)//对年龄初始化
   {
   age=age_;
   }
void initNum(int num_)//对学好初始化
   {
   num=num_;
   }
void average(int gra1,int gra2,int gra3,int gra4)//计算平均成绩
   {
   grade=(gra1+gra2+gra3+gra4)/4;
   }
void coutAll()//输出所有数据
   {
   cout<<name<<","<<age<<","<<num<<","<<grade<<endl;
   }
};
int main()
{
char name[10]="A";
int i,k;
for(i=0;i<10;i++)
   {
   cin>>name[i];
   k++;
   if(name[i]==',')
      break;
   }
name[k-1]='\0';
int age,num,gra1,gra2,gra3,gra4;
char a,b,c,d,e,f;
cin>>age>>b>>num>>c>>gra1>>d>>gra2>>e>>gra3>>f>>gra4;
student r;
r.initName(name);
r.initAge(age);
r.initNum(num);
r.average(gra1,gra2,gra3,gra4);
r.coutAll();
return 0;
}
