#include<iostream>
#define M 1000000
using namespace std;
int main()
{   unsigned int N,X,Y[M];
    cin>>N;
    cin>>X;
    for(int i=0;i<N;i++)
    {
        cin>>Y[i];
    }
    for(int i=0;i<N;i++)
    {
        if(Y[i]>=X)
       { cout<<"YES\n";
       }
       else
       {
         cout<<"NO\n";
       }
    }
    return 0;
}
