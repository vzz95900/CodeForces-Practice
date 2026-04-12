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
string a,b,c,d,e,f,g,h;
cin>>a>>b>>c>>d>>e>>f>>g>>h;
string ans="";
for(int i=0;i<8;i++){
    if(a[i]!='.'){
        ans+=a[i];
    }
    if(b[i]!='.'){
        ans+=b[i];
    }
    if(c[i]!='.'){
        ans+=c[i];
    }
    if(d[i]!='.'){
        ans+=d[i];
    }
    if(e[i]!='.'){
        ans+=e[i];
    }
    if(f[i]!='.'){
        ans+=f[i];
    }
    if(g[i]!='.'){
        ans+=g[i];
    }
    if(h[i]!='.'){
        ans+=h[i];
    }
}
cout<<ans<<endl;
}
return 0;
}