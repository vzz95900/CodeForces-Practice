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
int main()
{
    fastio();
    noch while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s(n, '0');
        int o = k;

        for (int i = 1; i < n - 1 && o >= 2; i += 2) {
            s[i] = '1';
            s[i - 1] = '0';
            s[i + 1] = '1';
            o -= 2;
        }
        for (int i = n - 1; i >= 0 && o > 0; i--) {
            if (s[i] == '0') {
                s[i] = '1';
                o--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}