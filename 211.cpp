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
int xa,ya,xb,yb,xf,yf;
cin>>xa>>ya>>xb>>yb>>xf>>yf;
int a=abs(xa-xb);
int b=abs(ya-yb);
int ans=a+b;
if(xa==xb && xf==xa && (yf>min(ya,yb) && yf<max(ya,yb))){
    ans+=2;
}
if(ya==yb && yf==ya && (xf>min(xa,xb) && xf<max(xa,xb))){
    ans+=2;
}
cout<<ans<<endl;
}
return 0;
}