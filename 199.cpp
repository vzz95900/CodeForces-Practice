#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch \
    int t;   \
    cin >> t;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define MOD 998244353
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main()
{
    fastio();
    noch const int mp = 200000 + 5;
    vector<long long> p2(mp), ip2(mp);

    p2[0] = 1;
    for (int i = 1; i < mp; i++)
    {
        p2[i] = (p2[i - 1] * 2LL) % MOD;
    }

    long long inv2 = 499122177;
    ip2[0] = 1;
    for (int i = 1; i < mp; i++)
    {
        ip2[i] = (ip2[i - 1] * inv2) % MOD;
    }
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int q;
            cin >> q;
            a.push_back(q);
        }
        long long uttr = 0;
        long long sum1 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                sum1 = (sum1 + ip2[cnt2]) % MOD;
                cnt1++;
            }
            else if (a[i] == 2)
            {
                cnt2++;
            }
            else if (a[i] == 3)
            {
                long long contrib = ((p2[cnt2] * sum1) % MOD - cnt1) % MOD;
                if (contrib < 0)
                    contrib += MOD;
                uttr = (uttr + contrib) % MOD;
            }
        }

        cout << uttr << endl;
    }
    return 0;
}