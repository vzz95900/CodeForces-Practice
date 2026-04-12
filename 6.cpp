#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < 4; ++j) {
                if (row[j] == '#') {
                    result[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            cout << result[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
