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
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}
bool uttr=false;
for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1] && a[i]==0){
        uttr=true;
        break;
    }
}
if(uttr){
    yes
    continue;
}
sort(a.begin(),a.end());
if(a[0]==0){
    no
}
else{
    yes
}
}
return 0;
}