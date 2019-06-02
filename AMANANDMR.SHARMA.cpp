#include<iostream>
#include<cmath>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
int d; 
cin >> d; 
double r, x; 
int t= 0; 
while (d--)
{
cin >> r >> x;
 
if ((2 * 22 *r)/7 <= x * 100)
t++;
}
cout << t;
return 0;
}
