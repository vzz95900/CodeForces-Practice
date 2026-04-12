#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
ll fact(ll n){
    ll p=1;
    for(ll i=1;i<=n;i++){
        p*=i;
    }
    return p;
}
int main()
{
ll a,b;
cin>>a>>b;
ll ans=fact(min(a,b));
cout<<ans<<endl;
return 0;
}