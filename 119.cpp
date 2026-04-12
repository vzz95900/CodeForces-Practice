#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
int ans=0;
for(int i=2;i<n;i++){
    if(a[i-2]==a[i-1] && a[i-1]==a[i]){
        ans=a[i];
    }
}
if(ans!=0){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}