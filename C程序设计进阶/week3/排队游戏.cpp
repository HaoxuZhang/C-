#include<iostream>
#include<string.h>
using namespace std;
char children[110];
char boy;
char girl;
int n=0;
int couple=0;
void boygirl()
{
int i,j;
for(i=0;i<n-1;i++)
   {
   bool flag=true;
   if(children[i]==boy)
      {
      for(j=i+1;j<n;j++)
         {
         if(children[j]==boy)
            break;
         if(children[j]==girl)
            {
            cout<<i<<" "<<j<<endl;
            children[i]=' ';
            children[j]=' ';
            flag=false;
            couple++;
            break;
            }
         }
      }
   if(flag==false)
      break;
   }
if(couple!=n/2)
   {
   boygirl();
   }
}
int main()
{
cin>>children;
boy=children[0];
n=strlen(children);
for(int i=0;i<n;i++)
   {
   if(children[i]!=boy)
      {
      girl=children[i];
      break;
      }
   }
boygirl();
return 0;
}
