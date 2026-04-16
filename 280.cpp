#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        long long p, q;
        cin >> p >> q;
        long long s = p + 2 * q;
        long long nval = 2 * s + 1;
        long long ansN = -1, ansM = -1;

        for (long long d = 3; d * d <= nval; d += 2) {
            if (nval % d != 0) continue;
            long long a = d;
            long long b = nval / d;
            long long n = (a - 1) / 2;
            long long m = (b - 1) / 2;

            if (n <= 0 || m <= 0) continue;

            long long h = n * (m + 1);
            long long v = m * (n + 1);

            if (q <= min(h, v)) {
                ansN = n;
                ansM = m;
                break;
            }
            n = (b - 1) / 2;
            m = (a - 1) / 2;
            h = n * (m + 1);
            v = m * (n + 1);

            if (q <= min(h, v)) {
                ansN = n;
                ansM = m;
                break;
            }
        }

        if (ansN == -1) {
            cout << -1 << '\n';
        } else {
            cout << ansN << ' ' << ansM << '\n';
        }

    }
    return 0;
}