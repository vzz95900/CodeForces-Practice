#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n,k;
cin>>n>>k;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool less=true;
for(int i=0;i<n;i++){
    if(a[i]>k){
        less=false;
    }
}
if(less){
    yes
    continue;
}
sort(a.begin(),a.end());
if(a[0]+a[1]<=k) yes
else no
}
return 0;
}