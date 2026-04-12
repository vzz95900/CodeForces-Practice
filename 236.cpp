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
int x,y,a;
cin>>x>>y>>a;
int rem=a%(x+y);
if(rem==0){
    no
}
else if(rem-x==0){
    yes
}
else if(rem-x<0){
    no
}
else{
    yes
}
}
return 0;
}