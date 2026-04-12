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
int main()
{
fastio();
noch
while(t--){
int k,a,b,x,y;
cin>>k>>a>>b>>x>>y;
int f=min(x,y);
int l=max(x,y);
int fl=-1;
int ll=-1;
if(f==x){
    fl=a;
    ll=b;
}
else{
    fl=b;
    ll=a;
}
int cnt=0;
if (k >= fl) {
    int use_f = (k - fl) / f + 1;
    cnt += use_f;
    k -= use_f * f;
}
if (k >= ll) {
    int use_l = (k - ll) / l + 1;
    cnt += use_l;
    k -= use_l * l;
}

    cout << cnt << endl;
}
return 0;
}