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
int x;
cin>>x;
int a,b,c;
cin>>a>>b>>c;
if(x==0){
    no
    continue;
}
int fk=x;
int sk=(fk==1) ? a : (fk==2) ? b:c;
if(sk==0){
    no
    continue;
}
int tk=(sk==1) ? a:(sk==2) ? b:c;

if(tk==0){
    no
    continue;
}
yes
}
return 0;
}