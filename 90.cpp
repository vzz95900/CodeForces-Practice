#include<iostream>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
ll n;
cin>>n;
int count=0;
for(int i=1;i<=9;i++){
ll nu=i;
while(nu<=n){
    count++;
    nu=nu*10+i;
}
}
cout<<count<<endl;
}
return 0;
}