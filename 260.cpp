/* ViJzZz Ka CoDe h ❤️ */


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
int n;
cin>>n;
vector<int> a;
int d=0;
for(int i=0;i<n;i++){
int q;
cin>>q;
d+=q;
a.push_back(q);
}
if(d/n<n){
cout<<d/n<<endl;
}
else cout<<n<<endl;
}
return 0;
}