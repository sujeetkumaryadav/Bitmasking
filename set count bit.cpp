#include<iostream>
using namespace std;
int SetCountBit(int n)
{
int cnt=0;
while(n>0)
{
if(n&1>0)
cnt++;
n=n>>1;
}
return cnt;
}
int main()
{
int n;
cin>>n;
cout<<SetCountBit(n)<<endl;
}
