#include<iostream>
#include<vector>
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
vector<int> b(n);
for(int i=0;i<n;i++){
    cin>>b[i];
}
if(n==1){
    cout<<a[0]<<endl;
    continue;
}
int m=0;
int s=0;
for(int i=1;i<n;i++){
    if(a[i-1]>b[i]){
        m+=a[i-1];
        s+=b[i];
    }
}
m+=a[n-1];
cout<<m-s<<endl;
}
return 0;
}