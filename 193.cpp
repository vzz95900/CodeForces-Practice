#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastio();
noch
while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    long long tw = accumulate(a.begin(), a.end(), 0LL);

    if (tw % n != 0) {
        no
        continue;
    }
    long long target = tw / n, excess = 0;
    bool yo=true;
    for (int i = 0; i < n; ++i) {
        if (a[i] > target) {
            excess += (a[i] - target);
        } else if (a[i] < target) {
            if (excess < (target - a[i])) {
                yo=false;
            }
            excess -= (target - a[i]);
        }
    }
    if(yo) yes
    else no

}
return 0;
}