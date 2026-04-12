#include<iostream>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
ll evs,os;
if(n%2==0){
    evs=(n/2)*(n/2+1);
    os=(n/2)*(n/2);
}
else{
    evs=((n-1)/2)*((n-1)/2+1);
    os=((n+1)/2)*((n+1)/2);
}
cout<<evs-os<<endl;
return 0;
}