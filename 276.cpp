/* ViJzZz Ka CoDe h ❤️ */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define noch \
    int t;   \
    cin >> t;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, int> count;
    long long tsum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        count[a[i]]++;
        tsum += a[i];
    }
    vector<pair<long long, int>> gps;
    for (auto &p : count)
    {
        gps.emplace_back(p.first, p.second);
    }
    sort(gps.rbegin(), gps.rend());
    vector<long long> co;
    for (auto &p : gps)
    {
        if (p.second % 2 == 1)
        {
            co.push_back(p.first);
        }
    }
    sort(co.begin(), co.end());
    int mimimi = co.size();
    long long ssum = 0;
    if (mimimi > 2)
    {
        for (int i = 0; i < mimimi - 2; ++i)
        {
            ssum += co[i];
        }
    }
    long long livesum = tsum;
    int cur_n = n;
    int idx = 0;
    long long ans = 0;
    while (true)
    {
        long long S = livesum - ssum;
        long long M = (idx < gps.size() ? gps[idx].first : 0LL);
        int loji = (mimimi > 2 ? mimimi - 2 : 0);
        int leftk = cur_n - loji;
        if (leftk >= 3 && S > 2LL * M)
        {
            ans = S;
            break;
        }
        if (idx >= gps.size())
        {
            break;
        }
        auto [l, f] = gps[idx];
        livesum -= l * 1LL * f;
        cur_n -= f;
        if (f % 2 == 1)
        {
            if (mimimi > 3)
            {
                ssum -= co[mimimi - 3];
            }
            else
            {
                ssum = 0;
            }
            co.pop_back();
            mimimi--;
        }
        idx++;
    }
    cout << ans << '\n';
}
int main()
{
    fastio();
    noch while (t--)
    {
        solve();
    }
    return 0;
}