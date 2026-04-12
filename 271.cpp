/* ViJzZz Ka CoDe h ❤️ */

#include <bits/stdc++.h>
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == k)
    {
        string result(n, '-');
        cout << result << endl;
        return;
    }

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (char c : s)
    {
        if (c == '0')
        {
            count0++;
        }
        else if (c == '1')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    int plus_start = count0 + count2 + 1;
    int plus_end = n - (count1 + count2);

    string result(n, ' ');

    for (int i = 1; i <= n; ++i)
    {
        if (i <= count0)
        {
            result[i - 1] = '-';
        }
        else if (i > n - count1)
        {
            result[i - 1] = '-';
        }
        else if (i >= plus_start && i <= plus_end)
        {
            result[i - 1] = '+';
        }
        else
        {
            result[i - 1] = '?';
        }
    }

    cout << result << endl;
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