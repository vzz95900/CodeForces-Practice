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
int n;
cin>>n;
if(n%2!=0){
    no
    continue;
}
string abc="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string ans;
for(int i=0;i<n/2;i++){
    ans+=abc[i];
    ans+=abc[i];
}
yes
cout<<ans<<endl;
}
return 0;
}