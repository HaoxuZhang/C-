#include<iostream>
#include<iomanip>
using namespace std;
class RED
{
int dragonNum,dragonHp,dragonAd;
int ninjaNum,ninjaHp,ninjaAd;
int icemanNum,icemanHp,icemanAd;
int lionNum,lionHp,lionAd;
int wolfNum,wolfHp,wolfAd;
public:
RED(int i,int j,int k,int l,int m):dragonHp(i),ninjaHp(j),icemanHp(k),lionHp(l),wolfHp(m)
{dragonNum=0;
ninjaNum=0;
icemanNum=0;
lionNum=0;
wolfNum=0;}
int hp(int i)
{
if(i==0)
   return icemanHp;
if(i==1)
   return lionHp;
if(i==2)
   return wolfHp;
if(i==3)
   return ninjaHp;
if(i==4)
   return dragonHp;
}
void numPlus(int i)
{
if(i==0)
   icemanNum++;
if(i==1)
   lionNum++;
if(i==2)
   wolfNum++;
if(i==3)
   ninjaNum++;
if(i==4)
   dragonNum++;
}
int numOut(int i)
{
if(i==0)
   return icemanNum;
if(i==1)
   return lionNum;
if(i==2)
   return wolfNum;
if(i==3)
   return ninjaNum;
if(i==4)
   return dragonNum;
}
};


class BLUE
{
int dragonNum,dragonHp,dragonAd;
int ninjaNum,ninjaHp,ninjaAd;
int icemanNum,icemanHp,icemanAd;
int lionNum,lionHp,lionAd;
int wolfNum,wolfHp,wolfAd;
public:
BLUE(int i,int j,int k,int l,int m):dragonHp(i),ninjaHp(j),icemanHp(k),lionHp(l),wolfHp(m)
{dragonNum=0;
ninjaNum=0;
icemanNum=0;
lionNum=0;
wolfNum=0;}
int hp(int i)
{
if(i==0)
   return lionHp;
if(i==1)
   return dragonHp;
if(i==2)
   return ninjaHp;
if(i==3)
   return icemanHp;
if(i==4)
   return wolfHp;
}
void numPlus(int i)
{
if(i==0)
   lionNum++;
if(i==1)
   dragonNum++;
if(i==2)
   ninjaNum++;
if(i==3)
   icemanNum++;
if(i==4)
   wolfNum++;
}
int numOut(int i)
{
if(i==0)
   return lionNum;
if(i==1)
   return dragonNum;
if(i==2)
   return ninjaNum;
if(i==3)
   return icemanNum;
if(i==4)
   return wolfNum;
}
};

int main()
{
int n;
cin>>n;
int i;
for(i=0;i<n;i++)
   {
   int M,mDragon,mNinja,mIceman,mLion,mWolf;
   cin>>M;
   cin>>mDragon>>mNinja>>mIceman>>mLion>>mWolf;
   cout<<"Case:"<<i+1<<endl;
   char cRed[5][7]={"iceman","lion","wolf","ninja","dragon"};
   char cBlue[5][7]={"lion","dragon","ninja","iceman","wolf"};
   int numRed=0;
   int numBlue=0;
   RED red(mDragon,mNinja,mIceman,mLion,mWolf);
   BLUE blue(mDragon,mNinja,mIceman,mLion,mWolf);
   int mred=M,mblue=M;
   int time=0;
   bool flag1=true;
   bool flag2=true;
   for(i=0;i<10000;i++)
      {
         mred=mred-red.hp(i%5);
         mblue=mblue-blue.hp(i%5);
         if(mred>=0)
         {
         red.numPlus(i%5);
         numRed++;
         cout<<setw(3)<<setfill('0')<<time<<" red "<<cRed[i%5]<<" "<<numRed<<" born with strength"<<red.hp(i%5)<<","<<red.numOut(i%5)<<" "<<cRed[i%5]<<" in red headquarter"<<endl;
         }
         if(mred<0&&flag1)
         {
         cout<<setw(3)<<setfill('0')<<time<<" red headquarter stops making warriors"<<endl;
         flag1=false;
         }
         if(mblue>=0)
         {
         blue.numPlus(i%5);
         numBlue++;
         cout<<setw(3)<<setfill('0')<<time<<" blue "<<cBlue[i%5]<<" "<<numBlue<<" born with strength"<<blue.hp(i%5)<<","<<blue.numOut(i%5)<<" "<<cBlue[i%5]<<" in blue headquarter"<<endl;
         }
         if(mblue<0&&flag2)
         {
         cout<<setw(3)<<setfill('0')<<time<<" red headquarter stops making warriors"<<endl;
         flag2=false;
         }
         if(flag1==false&&flag2==false)
            break;
      time++;
      }
    }
return 0;
}
