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
int n,k,p;
cin>>n>>k>>p;
int ans;
if(abs(k)%p==0){
    ans=abs(k)/p;
}
else{
    ans=abs(k)/p+1;
}
if(ans<=n){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}