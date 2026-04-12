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
int n;
cin>>n;
string a;
cin>>a;
int zc=0,nc=0;
for(int i=0;i<n;i++){
    if(a[i]=='z') zc++;
    if(a[i]=='n') nc++;
}
// opt
for(int i=0;i<nc;i++){
    cout<<1<<" ";
}
for(int i=0;i<zc;i++){
    cout<<0<<" ";
}
cout<<endl;
return 0;
}