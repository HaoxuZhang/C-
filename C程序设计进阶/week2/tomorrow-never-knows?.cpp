#include<iostream>
#include<iomanip>
using namespace std;
bool leapyear(int year)
{
bool leap=false;
if(((year%4==0)&&(year%100!=0))||(year%400==0))
   leap=true;
return leap;
}
int main()
{
int year=0,month=0,day=0;
char a,b;
cin>>year>>a>>month>>b>>day;
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(day>=monthdays[month-1])
   {
   if(month==12)
      {
      year++;
      month=1;
      day=1;
      }
   else if(month==2)
      {
      if((leapyear(year)==true)&&(day==28))
         {
         day++;
         }
      else
         {
         month++;
         day=1;
         }
      }
   else
      {
      month++;
      day=1;
      }
   }
else
   day++;
cout<<year<<"-"<<setw(2)<<setfill('0')<<month<<"-"<<setw(2)<<setfill('0')<<day<<endl;
return 0;
}
