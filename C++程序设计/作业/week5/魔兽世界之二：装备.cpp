#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int HP[5];
int r_make[5]={2,3,4,1,0};
int b_make[5]={3,0,1,2,4};
string Weapon[3]={"sword","bomb","arrow"};
class warriors{
	int num;
	int hp;
	public:
	warriors(int color,int warriors_name,int warriors_num,int _hp,int _left);
};
warriors::warriors(int color,int warriors_name,int warriors_num,int _hp,int _left)
{
	string camp_name;
	if(color==0) camp_name="red";
	else camp_name="blue";
	string name;
	if(warriors_name==0) name="dragon";
	else if(warriors_name==1) name="ninja";
	else if(warriors_name==2) name="iceman";
	else if(warriors_name==3) name="lion";
	else if(warriors_name==4) name="wolf";
	num=warriors_num+1;//武士编号是从1开始的
	hp=_hp;
	int left=_left;
	cout<<" "<<camp_name<<" "<<name<<" ";
	cout<<num<<" born with strength "<<hp<<",";
	cout<<left<<" "<<name<<" in "<<camp_name<<" headquarter"<<endl;
}

class dragon:public warriors{
	string weapon;
	double morale;
	public:
	dragon(int color,int warriors_name,int warriors_num,int _hp,int _left,int life);
};
dragon::dragon(int color,int warriors_name,int warriors_num,int _hp,int _left,int life):warriors(color,warriors_name,warriors_num,_hp,_left){
	weapon=Weapon[(warriors_num+1)%3];
	morale=(double)life/_hp;
	cout<<"It has a "<<weapon<<",and it's morale is "<<fixed<<setprecision(2)<<morale<<endl;
}

class ninja:public warriors{
	string weapon1;
	string weapon2;
	public:
	ninja(int color,int warriors_name,int warriors_num,int _hp,int _left);
};
ninja::ninja(int color,int warriors_name,int warriors_num,int _hp,int _left):warriors(color,warriors_name,warriors_num,_hp,_left){
	weapon1=Weapon[(warriors_num+1)%3];
	weapon2=Weapon[(warriors_num+1+1)%3];
	cout<<"It has a "<<weapon1<<" and a "<<weapon2<<endl;
}

class iceman:public warriors{
	string weapon;
	public:
	iceman(int color,int warriors_name,int warriors_num,int _hp,int _left);
};
iceman::iceman(int color,int warriors_name,int warriors_num,int _hp,int _left):warriors(color,warriors_name,warriors_num,_hp,_left){
	weapon=Weapon[(warriors_num+1)%3];
	cout<<"It has a "<<weapon<<endl;
}

class lion:public warriors{
	int loyalty;
	public:
	lion(int color,int warriors_name,int warriors_num,int _hp,int _left,int life);
};
lion::lion(int color,int warriors_name,int warriors_num,int _hp,int _left,int life):warriors(color,warriors_name,warriors_num,_hp,_left){
	loyalty=life;
	cout<<"It's loyalty is "<<loyalty<<endl;
}

class wolf:public warriors{
	public:
		wolf(int color,int warriors_name,int warriors_num,int _hp,int _left);
};
wolf::wolf(int color,int warriors_name,int warriors_num,int _hp,int _left):warriors(color,warriors_name,warriors_num,_hp,_left){}

class camp{
	int color;//阵营的颜色
	int life;//阵营的生命元数量
	int left_warriors[5];//阵营现有的该武士数量
	public:
	camp(int _life,int _color);
	~camp();
	void make_warriors(int warriors_name,int hp,int warriors_num);//制造武士函数
	void change(int warriors_name,int hp);//制造武士后阵营成员变量的改变
	int getLife();
};

int camp::getLife(){
	return life;
}
camp::camp(int _life,int _color){
	life=_life;
	color=_color;
	for(int i=0;i<5;i++)
	{
		left_warriors[i]=0;
	}
}
camp::~camp(){
	if(color==0) cout<<"red headquarter stops making warriors"<<endl;
	else cout<<"blue headquarter stops making warriors"<<endl;
}
void camp::make_warriors(int warriors_name,int hp,int warriors_num){
	change(warriors_name,hp);
	if(warriors_name==0) dragon tmp(color,warriors_name,warriors_num,hp,left_warriors[warriors_name],life);
	else if(warriors_name==1) ninja tmp(color,warriors_name,warriors_num,hp,left_warriors[warriors_name]);
	else if(warriors_name==2) iceman tmp(color,warriors_name,warriors_num,hp,left_warriors[warriors_name]);
	else if(warriors_name==3) lion tmp(color,warriors_name,warriors_num,hp,left_warriors[warriors_name],life);
	else wolf tmp(color,warriors_name,warriors_num,hp,left_warriors[warriors_name]);
}
void camp::change(int warriors_name,int hp){
	life-=hp;
	left_warriors[warriors_name]++;

}


int main()
{
	int SUM;
	cin>>SUM;
	for(int m=0;m<SUM;m++)
	{
		int M;
		cin>>M;
		for(int j=0;j<5;j++)
		{
			cin>>HP[j];
		}
		cout<<"case:"<<m+1<<endl;
		camp* RED=new camp(M,0);
		camp* BLUE=new camp(M,1);
		camp* p;
		bool flagRed=true,flagBlue=true;
		for(int i=0;i<999;i++)
		{ 
		for(int j=0;j<2;j++)
		{
			int cur;//确定当前可以制造哪个武士
			if(j==0&&flagRed==true) p=RED;
			else if(j==1&&flagBlue==true) p=BLUE;
			else continue;
			int warriors_name;//确定应该制造的是哪个武士
			if(j==0) warriors_name=r_make[i%5];
			else warriors_name=b_make[i%5];
			if(p->getLife()>=HP[warriors_name]) cur=warriors_name;//确定当前阵营的剩余生命元数量是否可以进行当前武士的生产
			else
			{
				bool flag=false;
				for(int k=1;k<=4;k++)
				{
					if(j==0) warriors_name=r_make[(i+k)%5];
					else warriors_name=b_make[(i+k)%5];
					if(p->getLife()>=HP[warriors_name])
					{
						cur=warriors_name;
						flag=true;
						break;
					}
				}
				if(flag==false)
				{
					if(j==0) flagRed=false;
					else flagBlue=false;
				    cout<<setw(3)<<setfill('0')<<i<<" ";
					delete p;
					continue;
				}
			}
			if(p){
			cout<<setw(3)<<setfill('0')<<i;
			p->make_warriors(cur,HP[cur],i);
		}
		}
		if(flagRed==false&&flagBlue==false)
			break;
	}
}
}
