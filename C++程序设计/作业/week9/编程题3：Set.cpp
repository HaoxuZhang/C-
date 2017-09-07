#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string cmd[n];
	int cmdInt[n];
	for(int i=0;i<n;i++){
		cin>>cmd[i]>>cmdInt[i];
	}
	multiset<int> a,b;
	multiset<int>::iterator p;
	for(int i=0;i<n;i++){
		if(cmd[i]=="add"){
			a.insert(cmdInt[i]);
			b=a;//每当添加一个元素，就将a赋值给b，因为ask的时候需要看的是曾经是否存在一个元素，所以用b来记录所有曾经出现过的元素
			cout<<a.count(cmdInt[i])<<endl;
		}
		if(cmd[i]=="del"){
			cout<<a.count(cmdInt[i])<<endl;
			p=a.find(cmdInt[i]);
			while(p!=a.end()&&*p==cmdInt[i]){//有可能不存在该元素，就要判断迭代器是否指向了尾端，有可能存在多个元素，所以每次迭代器++，并且判断指向的元素是否还是该元素
				a.erase(p);
				p++;
			}
		}
		if(cmd[i]=="ask"){
			int flag;
			p=b.find(cmdInt[i]);
			if(p!=a.end()) flag=1;
			else flag=0;
			int num=a.count(cmdInt[i]);
			cout<<flag<<" "<<num<<endl;
		}
	}
	return 0;
}
