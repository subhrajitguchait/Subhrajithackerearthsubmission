#include <iostream>
 
using namespace std;
 
bool prime(int n){
bool isPrime=false;
for(int i=2;i*i<=n;i++){
if(n%i==0){
isPrime=true;
}
}
return isPrime;
}
 
int main() {
int a,b,num;
cin>>a>>b;
for(int i=a;i<=b;i++){
int sum=0;
if(prime(i)==false){
num=i;
while(num!=0){
sum=sum+num%10;
num=num/10;
}
if(prime(sum)==false)
cout<<i<<" ";
}
}
return 0;
}
