/* ViJzZz Ka CoDe h ❤️ */


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
int n,k;
cin>>n>>k;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}
bool utr=true;
int lo=0;
for(int i=0;i<n;i++){
    if(a[i]==1){
        i+=k;
        lo=i;
        break;
    }
}
if(lo>=n || lo==0){
    yes
    continue;
}
for(int i=lo;i<n;i++){
    if(a[i]==1){
        utr=false;
        break;
    }
}
if(utr){
    yes
}
else{
    no
}
}
return 0;
}