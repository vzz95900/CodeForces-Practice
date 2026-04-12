#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
#define noch int t;cin>>t;
int main()
{
noch
while(t--){
int n;
        cin >> n;
        vector<int> a(n);
        vector<bool> u(n, false);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int c = 0;
        for(int i = 0; i < n; i++) {
            if(u[i]) continue;
            for(int j = i + 1; j < n; j++) {
                if(!u[j] && a[i] == a[j]) {
                    u[i] = u[j] = true;
                    c++;
                    break;
                }
            }
        }
        cout << c << "\n";
}
return 0;
}