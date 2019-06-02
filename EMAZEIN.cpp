#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
int x=0,y=0;
cin>>s;
for(int i=0;i<s.length();i++)
{
if(s[i]=='L')
{
x--;
 
}
else if(s[i]=='R')
{
x++;
 
} 
else if(s[i]=='U')
{
y++;
}
else if(s[i]=='D')
{
 
y--;
}
}
cout<<x<<" "<<y;
 
return 0;
}
