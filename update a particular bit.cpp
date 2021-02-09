#include<iostream>
using namespace std;
int updateBit(int n,int i,int v)
{
int mask=~(1<<i);
int clear_n=n&mask;
int res=clear_n|(v<<i);
return res;
}
int main()
{
int n,i,v;
cin>>n;
cin>>i;
cin>>v;
cout<<updateBit(n,i,v);

}
