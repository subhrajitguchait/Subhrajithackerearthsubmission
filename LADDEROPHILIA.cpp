#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"*   *\n";
        cout<<"*   *\n";
        cout<<"*****\n";
        cout<<"*   *\n";
        cout<<"*   *\n";
    }
    else{
    for(int i=0;i<=n;i++)
    {   if(i==(n))
        {
         cout<<"*   *\n";
         cout<<"*   *\n";
        }
        else 
        {cout<<"*   *\n";
         cout<<"*   *\n";
         cout<<"*****\n";
        }
        
    }
    }
    return 0;
}
