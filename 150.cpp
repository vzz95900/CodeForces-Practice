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
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
    int qo;
    cin>>qo;
    a.push_back(qo);
}
if(n==1){
    yes
    continue;
}
sort(a.begin(),a.end());
bool ans=true;
for(int i=1;i<n;i++){
    if(abs(a[i-1]-a[i])>1){
            ans=false;
            break;
    }
}
if(ans) yes
else no
}
return 0;
}