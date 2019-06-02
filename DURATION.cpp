#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sh,sm,eh,em;
        cin>>sh>>sm>>eh>>em;
        int f1m=sh*60+sm;
        int f2m=eh*60+em;
        int rh=(f2m-f1m)/60;
        int rm=(f2m-f1m)%60;
        cout<<rh<<" "<<rm<<endl;
    }
    return 0;
}
