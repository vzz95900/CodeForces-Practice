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
bool isPrime(int n) {
    if (n <= 1) return false;           // 0 and 1 are not prime
    if (n <= 3) return true;            // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Only check up to sqrt(n), skipping even numbers
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
fastio();
noch
while(t--){
int n;
cin>>n;
cout<<n-1<<endl;
}
return 0;
}