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
    ll n,x;
    cin>>n>>x;
    vector<ll> a;
    for(int i=0;i<n;i++){
    ll q;
    cin>>q;
    a.push_back(q);
    }
    sort(a.rbegin(), a.rend());
    
    int count = 0;
    int sz = 0;
    ll minis = LLONG_MAX;
    
    for (int i = 0; i < n; i++) {
        sz++;
        minis = min(minis, a[i]);
        
        if (sz * minis >= x) {
            count++;
            sz = 0;
            minis = LLONG_MAX;
        }
    }
    
    cout << count << "\n";
}
return 0;
}