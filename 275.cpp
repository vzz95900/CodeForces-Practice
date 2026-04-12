/* ViJzZz Ka CoDe h ❤️ */


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

void solve() {
    long long x, y, z;
    cin >> x >> y >> z;
    bool c1 = (((y & z) | x) == x);
    bool c2 = (((x & z) | y) == y);
    bool c3 = (((x & y) | z) == z);

    if (c1 && c2 && c3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
int main()
{
fastio();
noch
while(t--){
solve();
}
return 0;
}