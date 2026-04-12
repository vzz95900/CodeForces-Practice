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
int n;
cin>>n;
int k=0;
for(int i=0;(1<<i)<=n;++i){
    k=(1<<i)-1;
}
cout<<k<<endl;
}
return 0;
}