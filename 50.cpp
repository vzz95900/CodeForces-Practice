#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

ll reduce(ll x){
    while(x%2==0) x/=2;
    while(x%3==0) x/=3;
    return x;

}
int main()
{
ll n;
cin>>n;
vector<ll> an(n);
for(ll i=0;i<n;i++){
    cin>>an[i];
}
ll l=reduce(an[0]);
bool no=true;
for(ll i=0;i<n;i++){
    if(reduce(an[i])!=l){
        no=false;
        break;
    }
}
if(no) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}