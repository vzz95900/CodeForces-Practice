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
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int> b;
for(int i=0;i<n;i++){
    b.push_back(a[i]);
}
sort(a.begin(),a.end());
for(int i=0;i<n;i++){
    if(b[i]==a[n-1]){
        b[i]-=a[n-2];
    }
    else{
        b[i]-=a[n-1];
    }
}
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
cout<<endl;
}
return 0;
}