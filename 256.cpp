/* ViJaY Ka CoDe h ❤️ */


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
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
if(q<0){
    q=(-q);
}
a.push_back(q);
}
sort(a.begin(),a.end());
if(a[0]==0){
    cout<<0<<endl;
}
else{
    cout<<a[0]<<endl;
}
return 0;
}