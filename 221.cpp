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
string a;
cin>>a;
int ca=0,cb=0,cc=0,cd=0;
for(int i=0;i<a.size();i++){
    if(a[i]=='A'){
        ca++;
    }
    if(a[i]=='B'){
        cb++;
    }
    if(a[i]=='C'){
        cc++;
    }
    if(a[i]=='D'){
        cd++;
    }
}
if(ca>n){
    ca=n;
}
if(cb>n){
    cb=n;
}
if(cc>n){
    cc=n;
}
if(cd>n){
    cd=n;
}
cout<<ca+cb+cc+cd<<endl;
}
return 0;
}