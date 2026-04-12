#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
noch
while(t--){
int n;
cin>>n;
vector<string> a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
vector<int> sec(n);
iota(sec.begin(),sec.end(), 0);
sort(sec.begin(),sec.end(),[&](int o,int p){
    if(o<p){
        return a[o][p]=='1';
    }
    return a[p][o]=='0';
});
for(int i=0;i<n;i++){
    cout<<sec[i]+1<<(i+1==n ? "\n":" ");
}
}
return 0;
}