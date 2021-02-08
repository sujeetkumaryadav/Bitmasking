#include<iostream>
using namespace std;
char* isEven(int n)
{
if(n&1>0)
{
 return "odd";
}
return "even";
}
int main()
{
int n;
cin>>n;
cout<<isEven(n);
}
