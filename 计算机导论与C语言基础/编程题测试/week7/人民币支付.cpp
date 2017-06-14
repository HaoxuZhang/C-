#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;
int hundred=0,fifty=0,twenty=0,ten=0,five=0,one=0;
hundred=n/100;
fifty=(n-hundred*100)/50;
twenty=(n-hundred*100-fifty*50)/20;
ten=(n-hundred*100-fifty*50-twenty*20)/10;
five=(n-hundred*100-fifty*50-twenty*20-ten*10)/5;
one=(n-hundred*100-fifty*50-twenty*20-ten*10-five*5)/1;
cout<<hundred<<endl<<fifty<<endl<<twenty<<endl<<ten<<endl<<five<<endl<<one<<endl;
return 0;
}
