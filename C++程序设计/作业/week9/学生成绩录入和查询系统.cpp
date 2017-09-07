#include<iostream>
#include<map>
#include<string>
using namespace std;
class CStudent{
	public:
		struct CInfo{
			int id;
			string name;
		};
		int score;//该类的第一个成员变量
		CInfo info;//该类的第二个成员变量
};
int main(){
	typedef multimap<int,CStudent::CInfo> MAP_STD;
	MAP_STD mp;
	CStudent st;
	string cmd;
	while(cin>>cmd){
		if(cmd=="Add"){
			cin>>st.info.name>>st.info.id>>st.score;
			mp.insert(MAP_STD::value_type(st.score,st.info));
		}
		else if(cmd=="Query"){
			int score;
			cin>>score;
			MAP_STD::iterator p=mp.lower_bound(score);
			if(p!=mp.begin()){
				p--;
				score=p->first;
				MAP_STD::iterator maxp=p;
				int maxId=p->second.id;
				for(;p!=mp.begin()&&p->first==score;p--){
					if(maxId<p->second.id)
					{
						maxId=p->second.id;
						maxp=p;
					}
				}
				if(p->first==score){
					if(p->second.id>maxId){
						maxp=p;
						maxId=p->second.id;
					}
				}
				cout<<maxp->second.name<<" "<<maxp->second.id<<" "<<maxp->first<<endl;
			}
			else
				cout<<"Nobody"<<endl;
		}
	}
	return 0;
}
