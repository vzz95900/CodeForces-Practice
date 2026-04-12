#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int n,k;
cin>>n>>k;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}
int ans=0;
for(int p:a){
    if(5-p>=k){
        ans++;
    }
}
cout<<ans/3<<endl;
return 0;
}