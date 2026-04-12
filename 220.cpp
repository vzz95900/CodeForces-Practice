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
ll a,b,k;
cin>>a>>b>>k;
ll fnl=0;
if(k%2==0){
    fnl=(k/2)*a-(k/2)*b;
}
else{
    fnl=(k/2)*a+a-(k/2)*b;
}
cout<<fnl<<endl;
}
return 0;
}