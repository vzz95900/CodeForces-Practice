#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n-1;i++){
    cin>>a[i];
}
int ans=0;
sort(a.begin(),a.end());
for(int i=1;i<=n;i++){
if(i!=a[i]){
    ans=i;
    break;
}
}
cout<<ans<<endl;
return 0;
}