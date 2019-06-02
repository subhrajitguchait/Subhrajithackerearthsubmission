#include<iostream>
using namespace std;
int main()
{
int i,t,n,m;
cin>>t;
for(i=0;i<t;i++)
{
cin>>n>>m;
if(m%n==0)
{
cout<<"Yes\n";
}
else
{
cout<<"No\n";
}
}
return 0;
}
