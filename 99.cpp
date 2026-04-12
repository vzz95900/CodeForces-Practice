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
vector <int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=0;
int ek=0;
if(a[0]==a[1]){
    ek=a[0];
}
else ek=a[2];
for(int i=0;i<n;i++){
    if(a[i]!=ek){
        ans=i+1;
        break;
    }
}
cout<<ans<<endl;
}
return 0;
}