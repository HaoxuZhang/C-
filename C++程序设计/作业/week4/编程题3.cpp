#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码
class Array2{
	int* p;
	int i,j;
	public:
	Array2(){p=NULL;}
	Array2(int _i,int _j):i(_i),j(_j){
		p=new int[_i*_j];
	}
	int* operator[](int _i){
		return p+_i*j;
	}
	int operator()(int _i,int _j){
		return *(p+_i*j+_j);
	}
	Array2& operator=(Array2& a){
		if(p!=NULL) delete []p;
		i=a.i;
		j=a.j;
		p=new int[i*j];
		memcpy(p,a.p,sizeof(int)*i*j);
		return *this;
	}
	~Array2(){
		if(p!=NULL) delete []p;
	}
};
int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
