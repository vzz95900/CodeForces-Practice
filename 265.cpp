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
#define noch int t; cin >> t;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main()
{
    fastio();
    noch 
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        int idx = 0;

        for (int i = 1; i <= n; i += 2)
        {
            p[idx++] = i;
        }

        for (int i = (n % 2 == 0) ? n : n - 1; i >= 2; i -= 2)
        {
            p[idx++] = i;
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}