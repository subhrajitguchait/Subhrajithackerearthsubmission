#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
 
long long int n,i,total,remain,demand,j;
 
cin>>n;
 
long long int arr[n],b[n+1],c[n];
 
b[0]=0;
 
for(i=1;i<=n;i++){
scanf("%lld",&arr[i-1]);
b[i]=0;
c[i-1]=0;
}
 
for(i=1;i<=n;i++){
b[i]=b[i-1]+arr[i-1];
}
 
for(i=0;i<n;i++){
 
j=i+1,demand=2;
 
remain=n-j;
 
while(demand<=remain && j<n){
demand+=1;
j=j+demand-1;
remain=n-j;
}
 
c[i]=b[j]-b[i];
}
 
n=sizeof(c)/sizeof(c[0]);
sort(c,c+n); 
cout<<c[n-1];
return(0);
}
