#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	typedef map<int,int> MAP_FIGHTER;
	MAP_FIGHTER mp;
	mp.insert(MAP_FIGHTER::value_type(1000000000,1));
	pair<MAP_FIGHTER::iterator,bool> pairs;
	while(n--){
		int id,strong;
		cin>>id>>strong;
		pairs=mp.insert(make_pair(strong,id));
		MAP_FIGHTER::iterator i=pairs.first;
		MAP_FIGHTER::iterator j=pairs.first;
		int fightID;
		if(i==mp.begin()){
			i++;
			fightID=i->second;
		}
		else if(i==mp.end()){
			i--;
			fightID=i->second;
		}
		else{
			i--;
			j++;
			fightID=i->second;
			if(abs(i->first-strong)>abs(j->first-strong))
				fightID=j->second;
		}
		cout<<id<<" "<<fightID<<endl;
	}
	return 0;
}
