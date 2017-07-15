#include<iostream>
using namespace std;
int main()
{
int row,col;
cin>>row>>col;
int a[row][col];
int i,j;
for(i=0;i<row;i++)
   {
   for(j=0;j<col;j++)
      cin>>a[i][j];
   }
int r,c;//r和c分别表示行和列的坐标
for(i=0;i<row+col-1;i++)//对角线数量为行数加列数减一
   {
   int c=i;
   for(r=0;r<row;r++)
      {
      if(r>=0&&r<row&&c>=0&&c<col)
         {
         cout<<*(*(a+r)+c)<<endl;
         }
      c--;
      }
   }
return 0;
}
