#include<iostream>
using namespace std;
int main()
{
    int a[10000000];
    int n,f=-1,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            f=i;
        }
    }
    if(f!=-1)
    {
    cout<<(f+1);
    }
    else 
    {
        cout<<f;
    }
    return 0;
}
