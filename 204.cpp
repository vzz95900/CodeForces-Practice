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
if(n%2==0){
    cout<<0<<endl;
    continue;
}
string x=to_string(n);
int asn=-1;
bool ns=false;
for(int i=0;i<x.length();i++){
    if((x[i]-'0')%2==0){
        ns=true;
        break;
    }
}
if(ns){
    if((x[0]-'0')%2==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
else{
    cout<<-1<<endl;
}
}
return 0;
}