#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a[10],s=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
     s=s+a[i];   
    }
    
    cout<<s;
    return 0;
}
