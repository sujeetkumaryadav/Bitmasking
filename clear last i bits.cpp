#include<iostream>
using namespace std;
int clearLastIBits(int n,int i)
{
int mask=(~0<<i);
int res=n&mask;
return res;
}
int main()
{
int n;
int i;
cin>>n>>i;
cout<<clearLastIBits(n,i);
}
