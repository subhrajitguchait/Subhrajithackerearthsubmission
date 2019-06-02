#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,f=0;
    string a;
    cin>>a;
    for(i=0,j=a.length()-1;i<a.length()/2;i++,j--)
    {
        if(a[i]!=a[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;
}
