#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define noch int t; cin >> t;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

int main() {
    noch
    while (t--) {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll count = 0;

        vector<ll> powers;
        ll powr = 1;
        while (powr <= r2) {
            if (powr >= l2) powers.push_back(powr);
            if (powr > r2 / k) break;
            powr *= k;
        }

        for (ll i = l1; i <= r1; ++i) {
            for (ll y : powers) {
                if (y > r2) break;
                if (y == i) {
                    count++;
                    break;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
