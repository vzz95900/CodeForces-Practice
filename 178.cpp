#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define noch int t; cin >> t;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fastio();
    noch
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<double> log_prefix(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            log_prefix[i] = log2(a[i]);
        }

        double left_sum = 0, right_sum = accumulate(log_prefix.begin(), log_prefix.end(), 0.0); 
        int ans = -1;

        for (int i = 0; i < n - 1; i++) {
            left_sum += log_prefix[i];  
            right_sum -= log_prefix[i];  

            if (abs(left_sum - right_sum) < 1e-9) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
