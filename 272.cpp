/* ViJzZz Ka CoDe h ❤️*/

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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_a = 0;
    for(char c : s) {
        if (c == 'a') {
            total_a++;
        }
    }
    int total_b = n - total_a;

    if (total_a == total_b) {
        cout << 0 << endl;
        return;
    }
    
    int target_diff = total_a - total_b;
    
    map<int, int> last_idx;
    last_idx[0] = -1;
    
    int min_len = n + 1;
    int current_balance = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            current_balance++;
        } else {
            current_balance--;
        }
        int required_bal = current_balance - target_diff;

        if (last_idx.count(required_bal)) {
            int len = i - last_idx[required_bal];
            min_len = min(min_len, len);
        }
        
        last_idx[current_balance] = i;
    }
    if (min_len > n) {
        int whole_string_balance = 0;
        for(char c : s){
            if (c == 'a') whole_string_balance++;
            else whole_string_balance--;
        }
        if (whole_string_balance == target_diff) min_len = n;
    }

    if (min_len == n && target_diff !=0) {
        cout << -1 << endl;
    } else {
        cout << min_len << endl;
    }
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