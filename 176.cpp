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
int sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
if((sum)%3==0){
    cout<<0<<endl;
    continue;
}
if((sum+1)%3==0){
    cout<<1<<endl;
    continue;
}
bool ans=false;
for(int i=0;i<n;i++){
    if((sum-a[i])%3==0){
        ans=true;
        break;
    }
}
if(ans){
    cout<<1<<endl;
}
else{
    cout<<2<<endl;
}
}
return 0;
}