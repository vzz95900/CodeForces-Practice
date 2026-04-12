#include<iostream>
#include<vector>
#include<cmath>
typedef long long ll;
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
ll n;
cin>>n;
vector<ll> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
ll sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
ll bal=sqrt(sum);
ll mul=bal*bal;
if((mul)==sum) yes
else no
}
return 0;
}