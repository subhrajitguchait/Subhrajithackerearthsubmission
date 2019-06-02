#include <iostream>
using namespace std;
 
int main()
{
 int l,h[1000],w[1000],n;
 cin>>l;
 cin>>n;
for(int i=0;i<n;i++)
{
    cin>>w[i]>>h[i];
}
for(int i=0;i<n;i++)
{
    if((w[i]==l)&&(h[i]==l))
    {cout<<"ACCEPTED\n";
    }
    else if((w[i]<l)&&(w[i]==h[i]))
    {cout<<"UPLOAD ANOTHER\n";
    }
     else if((w[i]==h[i]))
    {cout<<"ACCEPTED\n";
    }
     else if((w[i]>l)&&(h[i]>l))
     {
         cout<<"CROP IT\n";   
         }
      else if((w[i]>l)&&(h[i]>l))
     {
         cout<<"CROP IT\n";   
         }
    else if((w[i]>l)&&(h[i]==l))
     {
         cout<<"CROP IT\n";   
         }
    else if((w[i]==l)&&(h[i]>l))
     {
         cout<<"CROP IT\n";   
         }
    else if((w[i]<l)&&(h[i]<l))
    {
        cout<<"UPLOAD ANOTHER\n";
    }
    
    else if((w[i]<l)||(h[i]>l))
    {
        cout<<"UPLOAD ANOTHER\n";
    }
    else if((w[i]<=1)||(h[i]<=1))
    {
        cout<<"UPLOAD ANOTHER\n";
    }
     else if((w[i]>=1000)||(h[i]>=1000))
    {
        cout<<"UPLOAD ANOTHER\n";
    }
    else if((w[i]>=1000)||(h[i]<=1000))
    {
        cout<<"UPLOAD ANOTHER\n";
    }
     else if((w[i]<=1000)||(h[i]>=1000))
    {
        cout<<"UPLOAD ANOTHER\n";
    }
}
 
	return 0;
}
