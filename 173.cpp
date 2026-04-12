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
int k,r;
cin>>k>>r;
int ans=-1;
int i=1;
while(1){
    if((k*i)%10==r || (k*i)%10==0){
        ans=i;
        break;
    }
    i++;
}
cout<<ans<<endl;
return 0;
}