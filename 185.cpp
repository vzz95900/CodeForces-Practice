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
string a;
cin>>a;
bool alpha=false;
for(int i=0;i<a.length()-1;i++){
    if(a[i]==a[i+1]){
        alpha=true;
    }
}
if(!alpha){
    cout<<a.length()<<endl;
}
else{
    cout<<1<<endl;
}
}
return 0;
}