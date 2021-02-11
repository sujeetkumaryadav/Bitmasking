#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int res=0;
int arr[1000005];
for(int i=0;i<n;i++)
{
cin>>arr[i];
 res=res^arr[i];
}
int pos=0;
int temp=res;
while((temp&1)!=1)
{
pos++;
temp=temp>>1;
}
int a=0;
int b=0;
int mask=1<<pos;
for(int i=0;i<n;i++)
{
if((arr[i]&mask)>0)
{
a=a^arr[i];
}
}
b=res^a;
cout<<min(a,b)<<" "<<max(a,b);
}
