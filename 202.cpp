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
int n,d;
cin>>n>>d;
string a;
cin>>a;
if((a[0]-'0')<d){
    cout<<d<<a<<endl;
    continue;
}
int indx=-1;
for(int i=0;i<n;i++){
    if((a[i]-'0')<d){
        indx=i;
        break;
    }
}
if(indx==-1){
    a+=to_string(d);
    cout<<a<<endl;
    continue;
}
string s=a.substr(0,indx);
string dk=a.substr(indx,n);
s+=to_string(d);
s+=dk;

cout<<s<<endl;
}
return 0;
}