#include<iostream>
using namespace std;
int main()
{
char s[79];
while(cin.getline(s,80))
{
int numA=0,numE=0,numI=0,numO=0,numU=0;
for(int i=0;i<80;i++)
   {
   switch(s[i])
      {
      case 'a':numA++;break;
      case 'e':numE++;break;
      case 'i':numI++;break;
      case 'o':numO++;break;
      case 'u':numU++;break;
      }
   }
cout<<numA<<" "<<numE<<" "<<numI<<" "<<numO<<" "<<numU<<endl;
}
return 0;
}
