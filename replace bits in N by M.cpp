#include<iostream>
using namespace std;

int clearRangeItoJ(int n,int i,int j)
{
int a=(~0<<j+1);
int b=(1<<i)-1;
int mask=a|b;
return mask&n;
}
int replaceBits(int n,int m,int i,int j)
{
int n_=clearRangeItoJ(n,i,j);
int ans=n_|(m<<i);
         return ans;
}
int main()
{
int n=15;

int i=1,j=3;
int m=2;
cout<<replaceBits(n,m,i,j)<<endl;
return 0;
}
