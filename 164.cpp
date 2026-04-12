#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
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
if(is_sorted(a.begin(),a.end())){
    yes
    continue;
}
bool answer=false;
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        answer=true;
        break;
    }
    else{
        a[i+1]-=a[i];
        a[i]=0;
    }
}
if(answer) no
else yes
}
return 0;
}