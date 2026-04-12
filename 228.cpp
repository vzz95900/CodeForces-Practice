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
int applyCeil(int x,int m){
    for(int i=0;i<m;i++){
        x=(x+1)/2;
    }
    return x;
}
int applyFloor(int x,int n){
    for(int i=0;i<n;i++){
        x/=2;
    }
    return x;
}
int main()
{
fastio();
noch
while(t--){
int x,n,m;
cin>>x>>n>>m;
if(m==0 && n==0){
    cout<<x<<" "<<x<<endl;
    continue;
}
if(m>x && n>x){
    cout<<0<<" "<<0<<endl;
    continue;
}
int64_t mini = (int64_t)(floor((ceil(x / (double)(1LL << m))) / (double)(1LL << n)));
int64_t maxi = (int64_t)(ceil((floor(x / (double)(1LL << n))) / (double)(1LL << m)));
cout<<mini<<" "<<maxi<<endl;
}
return 0;
}