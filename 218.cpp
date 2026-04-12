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
int a,b,c;
cin>>a>>b>>c;
if((a==b && c%2==0) || (b==c && a%2==0) || (c==a && b%2==0)){
    yes
    continue;
}
int g=-1;
if(a>b && a>c){
    if(b+c==a){
        yes
        continue;
    }
}
if(b>a && b>c){
    if(a+c==b){
        yes
        continue;
    }
}
if(c>b && c>a){
    if(b+a==c){
        yes
        continue;
    }
}
no
}
return 0;
}