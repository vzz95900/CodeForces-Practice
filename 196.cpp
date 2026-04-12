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
vector<int> ts(26,0);
for(char c:a){
    ts[c-'A']++;
}
int ps=0;
for(int i=0;i<26;i++){
    if(ts[i]>=(i+1)){
        ps++;
    }
}
cout<<ps<<endl;
}
return 0;
}