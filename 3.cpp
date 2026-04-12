#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Check if n is a perfect square
        int k = sqrt(n);
        if (k * k != n) {
            cout << "No" << endl;
            continue;
        }

        // Validate the matrix properties
        bool valid = true;
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < k; ++j) {
                char ch = s[i * k + j];
                if ((i == 0 || i == k - 1 || j == 0 || j == k - 1) && ch != '1') {
                    valid = false;
                    break;
                }
                if (i > 0 && i < k - 1 && j > 0 && j < k - 1 && ch != '0') {
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }

        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
