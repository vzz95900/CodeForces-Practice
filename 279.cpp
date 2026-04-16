#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int run = 1;
        bool ok = true;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                run++;
            }else{
                run = 1;
            }
            if(run >= m){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}