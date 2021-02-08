#include<iostream>
using namespace std;
int getBit(int n,int i)
{
int mask=(1<<i);
int bit =(mask&n)>0?1:0;
return bit;
}
int main()
{
int n,i;
cin>>n>>i;
cout<<getBit(n,i);
}
