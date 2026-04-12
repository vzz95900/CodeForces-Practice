/* ViJzZz Ka CoDe h ❤️ */


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 4e18;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
ll triplc(ll x, ll y, ll z) {
    return max({x, y, z}) - min({x, y, z});
}
ll mcl(const vector<ll>& v) {
    int n = v.size();
    if (n == 0) return 0;

    vector<ll> dp(n + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        if (i >= 2)
            dp[i] = min(dp[i], dp[i - 2] + abs(v[i - 1] - v[i - 2]));
        if (i >= 3)
            dp[i] = min(dp[i], dp[i - 3] + triplc(v[i - 1], v[i - 2], v[i - 3]));
    }

    return dp[n];
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll& x : a){
         cin >> x;
    }
    ll res = mcl(a);

    if (n >= 2) {
        vector<ll> middled(a.begin() + 1, a.end() - 1);
        ll midc = mcl(middled);
        if (midc != INF)
            res = min(res, abs(a[0] - a[n - 1]) + midc);
    }

    if (n >= 3) {
        vector<ll> mid1(a.begin() + 1, a.end() - 2);
        ll mid_cost1 = mcl(mid1);
        if (mid_cost1 != INF)
            res = min(res, triplc(a[n - 2], a[n - 1], a[0]) + mid_cost1);

        vector<ll> mid2(a.begin() + 2, a.end() - 1);
        ll mid_cost2 = mcl(mid2);
        if (mid_cost2 != INF)
            res = min(res, triplc(a[n - 1], a[0], a[1]) + mid_cost2);
    }

    cout << res << '\n';
}
int main()
{
fastio();
noch
while(t--){
    solve();
}
return 0;
}