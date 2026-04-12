#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        // Compute the difference between r and l
        long long delta = r - l;
        
        // Calculate the maximum k such that (k-1) * k / 2 <= delta
        // Using the quadratic formula k ≈ (sqrt(1 + 8 * delta) - 1) / 2
        long long discriminant = 1 + 8 * delta;
        long long sqrtDiscriminant = static_cast<long long>(sqrt(discriminant));
        
        // Compute the maximum k based on the discriminant
        long long k = (sqrtDiscriminant - 1) / 2;
        
        // Validate that k is correct
        while (k * (k + 1) / 2 > delta) {
            k--;
        }
        
        // Output the length of the longest good array
        cout << k + 1 << endl;
    }
    return 0;
}
