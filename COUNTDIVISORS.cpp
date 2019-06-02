#include <bits/stdc++.h> 
using namespace std;
int main(){
    int m,n,l,a,i;
    cin>>m;
    cin>>n;
    cin>>l;
    for(a=m;a<=n;a++)
    {
        if((a%l)==0)
        {
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}
