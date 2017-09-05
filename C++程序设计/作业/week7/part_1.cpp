#include <iostream>
using namespace std;
template<class TT>
class CArray3D{
public:
template<class T>
class CArray2D{
	T* a;
	int i,j;
public:
	CArray2D(){a=NULL;}
	CArray2D(int _i,int _j):i(_i),j(_j){
		a=new T[i*j];
	}
	T* operator[](int m){
		a+=m*j;
	}
	~CArray2D(){
		if(a!=NULL) delete []a;
	}
};
private:
CArray2D<TT>** p;
public:
CArray3D(){p=NULL;}
CArray3D(int _i,int _j,int _k){
	p=new CArray2D<TT>*[_i];
	for(int i=0;i<_i;i++)
	{
		p[i]=new CArray2D<TT>(_j,_k);
	}
}
CArray2D<TT>& operator[](int m){
	return *p[m];
}
~CArray3D(){
	if(p!=NULL) delete []p;
}
};
// 在此处补充你的代码
int main()
{
    CArray3D<int> a(3,4,5);
    int No = 0;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                a[i][j][k] = No ++;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                cout << a[i][j][k] << ",";
    return 0;
}
