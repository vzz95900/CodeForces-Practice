#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }

        int mex = 0;
        while (true) {
            if (s.find(mex) == s.end()) {
                bool can_create = false;
                for (int num : s) {
                    if (num > mex && (num - mex) % x == 0) {
                        can_create = true;
                        break;
                    }
                }
                if (!can_create) break;
            }
            mex++;
        }

        cout << mex << "\n";
    }

    return 0;
}