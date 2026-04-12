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
string s="";
string me="meow";
a[0]=tolower(a[0]);
s+=a[0];
for(int i=0;i<n-1;i++){
    a[i+1]=tolower(a[i+1]);
    if(a[i]!=a[i+1]){
        s+=a[i+1];
    }
}
if(s==me){
    yes
}

else{
    no
}
}
return 0;
}