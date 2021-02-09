#include<iostream>
using namespace std;
int clearRangeItoJ(int n,int i,int j)
{
int a=(~0<<j+1);
int b=(1<<i)-1;
int mask=a|b;
return n&mask;

}
int main()
{
int n=31;
int i=1;
int j=3;
cout<<clearRangeItoJ(n,i,j)<<endl;
}
