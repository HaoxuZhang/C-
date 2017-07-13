#include<iostream>
using namespace std;
int main()
{
int k=0;
cin>>k;
int sum[k]={0};
int i;
int a[100][100];
for(i=0;i<k;i++)
   {
   int m,n;
   cin>>m>>n;
   int p,q;
   for(p=0;p<m;p++)
      {
      for(q=0;q<n;q++)
         {
         cin>>a[p][q];
         if(p==0||p==m-1||q==0||q==n-1)
            sum[i]=sum[i]+*(*(a+p)+q);
         }
      }
   }
for(i=0;i<k;i++)
   cout<<sum[i]<<endl;
return 0;
}
