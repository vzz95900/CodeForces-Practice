/* ViJzZz Ka CoDe h ❤️ */
 
 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch ll t;cin>>t;
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
    cin >> n;
    vector<ll> a(n), b(n), r(n);
    
    // Read input directly into vectors
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
        cin >> b[i];
    }
    
    // Precompute powers of 2 to avoid repeated calculations
    vector<ll> pow2_a(n), pow2_b(n);
    for(ll i = 0; i < n; i++){
        pow2_a[i] = 1LL << a[i];  // Bit shift is faster than pow(2, a[i])
        pow2_b[i] = 1LL << b[i];
    }
    
    // Use sliding window maximum approach
    for(ll i = 0; i < n; i++){
        ll max_val = 0;
        for(ll j = 0; j <= i; j++){
            ll current = pow2_a[j] + pow2_b[i-j];
            max_val = max(max_val, current);
        }
        r[i] = max_val;
    }
    
    // Output results
    for(ll i = 0; i < n; i++){
        cout << r[i] << " ";
    }
    cout << "\n";  // \n is faster than endl
}
return 0;
}