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
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}
sort(a.begin(),a.end());

int x=0;
for(int i=0;i<n;i++){
    if((a[i]+a[n-1])%2==0){
        x=i;
        break;
    }
    else if((a[0]+a[n-1-i])%2==0){
        x=i;
        break;
    }
}
cout<<x<<endl;
}
return 0;
}