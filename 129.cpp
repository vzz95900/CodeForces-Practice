#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    noch
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<pair<int,int>> cst;
        int mp = 0;
        
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cst.push_back({x, 0});
            mp = max(mp, x);
        }
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cst.push_back({x, 1}); 
            mp = max(mp, x);
        }
        
        sort(cst.begin(), cst.end());
        
        ll best_earnings = 0;
        int curr_pos = 0, curr_neg = 0;
        int total = 0;
        
        // For each unique price point
        for(int i = 0; i < cst.size(); i++) {
            int price = cst[i].first;
            
            // Skip duplicate prices
            while(i + 1 < cst.size() && cst[i + 1].first == price) {
                if(cst[i].second == 0) curr_pos++;
                else curr_neg++;
                i++;
            }
            if(cst[i].second == 0) curr_pos++;
            else curr_neg++;
            
            // Calculate total cst at this price point
            total = n - curr_pos - curr_neg;
            int neg_reviews = curr_neg;
            int buyers = total + curr_pos + curr_neg;
            
            if(neg_reviews <= k) {
                best_earnings = max(best_earnings, (ll)price * buyers);
            }
        }
        
        cout << best_earnings << endl;
    }
    return 0;
}