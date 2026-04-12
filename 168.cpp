#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define tst ll t;cin>>t;
int main(){
    fastio();
    tst
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll rL=r-l+1;
        r=min(r,n);
        l=max(l,1LL);
        ll st=l-1;
        rL=min(rL,r);
        rL=min(rL,n-st);
        vector<ll> lP,rP;
        for(ll i=0;i<r;i++){
            lP.push_back(a[i]);
        }
        for(ll i=st;i<n;i++){
            rP.push_back(a[i]);
        }
        sort(lP.begin(),lP.end());
        sort(rP.begin(),rP.end());

        ll lS=0,rS=0;
        for(ll i=0;i<rL;i++){
            if(i<lP.size()){
                lS+=lP[i];
            }
            if(i<rP.size()){
                rS+=rP[i];
            }
        }
        cout<<min(lS,rS)<<endl;
    }
    return 0;
}