#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastio();
noch
while(t--){
    ll n;
    cin>>n;
    vector<ll> a;
    for(ll i=0;i<n;i++){
    ll q;
    cin>>q;
    a.push_back(q);
    }
    ll mp=LLONG_MIN;
    for(ll i=0;i<n-1;i++){
        mp=max(mp,a[i]*a[i+1]);
    }
    cout<<mp<<endl;
}
return 0;
}