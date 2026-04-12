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
bool yu=true;
for(int i=0;i<n;i++){
    if(!islower(a[i]) && !isdigit(a[i])){
        yu=false;
        break;
    }
}
if(yu==false){
    no
    continue;
}
string b=a;
sort(b.begin(),b.end());
if(a==b){
    yes
}
else{
    no
}
}
return 0;
}