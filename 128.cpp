#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define noch \
    int t;   \
    cin >> t;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
int main()
{
    noch while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll sum = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sm = sum - (a[i] + a[j]);
                if (sm >= x && sm <= y)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}