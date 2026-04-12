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
string constructBinaryString(int n, int m, int k) {
    if (k > max(n, m)) return "-1"; // Impossible case
    
    string result;
    int balance = 0, max_balance = 0;
    
    // Start with the larger count to keep balance controlled
    char first = (n > m) ? '0' : '1';
    char second = (first == '0') ? '1' : '0';
    int firstCount = max(n, m), secondCount = min(n, m);
    
    while (firstCount > 0 || secondCount > 0) {
        if (firstCount > 0) {
            result += first;
            firstCount--;
            balance += (first == '0') ? 1 : -1;
        }
        if (secondCount > 0 && abs(balance) < k) {
            result += second;
            secondCount--;
            balance += (second == '0') ? 1 : -1;
        }
        max_balance = max(max_balance, abs(balance));
    }
    
    // Ensure we achieved exactly k balance
    if (max_balance != k) return "-1";
    return result;
}
int main()
{
fastio();
noch
while(t--){
int n,m,k;
cin>>n>>m>>k;
string result = constructBinaryString(n, m, k);
cout << result << endl;
}
return 0;
}