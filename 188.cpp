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
noch
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    c.push_back(q);
    }
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
        b.push_back(q);
    }
    reverse(c.begin(),c.end());
    if(is_sorted(c.begin(),c.end())){
        yes
        continue;
    }
    sort(b.begin(),b.end());
    ll cr=-1e18;
    bool ur=true;
    for(int i:a){
        int ca1=(i>=cr) ? i:-1;
        ll nd=cr+i;
        auto it=lower_bound(b.begin(),b.end(),nd);
        int ca2=(it!=b.end()) ? (*it-i) :-1;
        if(ca1==-1 && ca2==-1){
            ur=false;
            break;
        }
        int best;
        if(ca1!=-1 && ca2!=-1){
            best=min(ca1,ca2);
        }
        else{
            best=(ca1!=-1) ? ca1:ca2;
        }
        cr=best;
    }
    if(ur) yes
    else no
}
return 0;
}