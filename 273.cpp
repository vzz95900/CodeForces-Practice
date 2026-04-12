/* ViJzZz Ka CoDe h ❤️ */


#include<bits/stdc++.h>
using namespace std;
// int n;
// cin>>n;
// vector<int> a;
// for(int i=0;i<n;i++){
// int q;
// cin>>q;
// a.push_back(q);
//}
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
void solve() {
    int n;
    long long k;
    cin >> n >> k;

    long long tsb = (long long)n * (n - 1) / 2;
    for (int i = 0; i <= n; ++i) {
        long long S;
        if (i == 0) {
            S = tsb;
        } else {
            long long lsp = n - i + 1;
            S = lsp * (lsp - 1) / 2;
        }

        if (tsb - S == k) {
            for (int j = i; j >= 1; --j) {
                cout << j << " ";
            }
            for (int j = i + 1; j <= n; ++j) {
                cout << j << " ";
            }
            cout << "\n";
            return;
        }
    }

    for (int c = 1; c < n; ++c) {
        long long lenA = n - c;
        long long lenB = c;
        long long SA = lenA * (lenA - 1) / 2;
        long long SB = lenB * (lenB - 1) / 2;
        long long S = SA + SB;
        
        if (tsb - S == k) {
            for (int j = c + 1; j <= n; ++j) {
                cout << j << " ";
            }
            for (int j = 1; j <= c; ++j) {
                cout << j << " ";
            }
            cout << "\n";
            return;
        }
    }
    cout << 0 << "\n";
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