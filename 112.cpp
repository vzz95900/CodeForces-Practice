#include<iostream>
#include<vector>
using namespace std;
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
bool ans=false;
for(int i=0;i<n;i++){
    if (a[i]==k){
        ans=true;
        break;
    }
}
if(ans) yes
else no
}
return 0;
}