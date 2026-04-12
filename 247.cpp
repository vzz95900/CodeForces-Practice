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
int main()
{
fastio();
noch
while(t--){
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    vector<char> singles, pairs;

    for (char c : s) freq[c]++;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second == 1)
            singles.push_back(it->first);
        else
            pairs.push_back(it->first);
    }

    int n = s.size();
    string res(n, '.');
    for (int gap = 1; gap < n; ++gap) {
        string temp = res;
        int pos = 0;
        bool ok = true;

        for (char c : pairs) {
            while (pos + gap < n && (temp[pos] != '.' || temp[pos + gap] != '.'))
                ++pos;

            if (pos + gap >= n) {
                ok = false;
                break;
            }

            temp[pos] = temp[pos + gap] = c;
            ++pos;
        }

        if (ok) {
            res = temp;
            break;
        }
    }
    int fill = 0;
    for (char c : singles) {
        while (res[fill] != '.') ++fill;
        res[fill++] = c;
    }

    cout << res << endl;
}
return 0;
}