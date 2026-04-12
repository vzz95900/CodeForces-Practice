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

int main() {
    fastio();
    noch
    while (t--) {
        string s;
        cin >> s;
        
        int first_one = -1, last_one = -1;
        int count_zeros = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (first_one == -1) first_one = i;
                last_one = i;
            }
        }
        
        if (first_one == -1) {
            cout << 0 << endl;
            continue;
        }
        for (int i = first_one; i <= last_one; i++) {
            if (s[i] == '0') count_zeros++;
        }
        
        cout << count_zeros << endl;
    }
    return 0;
}
