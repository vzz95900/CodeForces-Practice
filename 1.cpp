#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if ((a % 2 == 0 && b % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else if (a % 2 == 0 && b % 2 != 0)
        {
            if (a == 0)
            {    cout << "NO" << endl;}
            else
            {    cout << "YES" << endl;}
        }
    }
    return 0;
}