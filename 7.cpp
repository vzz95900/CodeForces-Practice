#include <iostream>
#include <string>

using namespace std;

string opr(int n) {
    string result;

    for (int i = 0; i < (n + 1) / 2; ++i) {
        result += 'a' + (i % 26); 
    }
    string reversePart = result;
    reverse(reversePart.begin(), reversePart.end());

    if (n % 2 != 0) {
        reversePart.erase(reversePart.begin());
    }

    result += reversePart;

    if (result.length() < n) {
        result += string(n - result.length(), 'a');
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n; 
        
        string result = opr(n);
        cout << result << endl;
    }
    
    return 0;
}
