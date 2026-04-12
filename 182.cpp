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
bool isValid(vector<ll>& a, ll k) {
    int n = a.size();
    vector<bool> painted(n, false);
    painted[0] = true;
    int used_extra = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > k) {
            if (used_extra == 1) return false;
            used_extra = 1;
        }
        painted[i] = true;
    }

    return true;
}
int main()
{
fastio();
noch
while(t--){
    int n;
    cin>>n;
    vector<ll> a;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    if(n==1){
        cout<<1<<endl;
        continue;
    }
    if(n==2){
        cout<<a[1]-a[0]<<endl;
        continue;
    }
    ll left = 1, right = a[n - 1] - a[0], ans = right;
        while (left <= right) {
            ll mid = (left + right) / 2;
            if (isValid(a, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << ans << endl;
}
return 0;
}