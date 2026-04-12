#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastio();
ll k2,k3,k5,k6;
cin>>k2>>k3>>k5>>k6;
ll a=min({k2,k5,k6});
k2-=a;
ll b=min(k3,k2);
cout<<256*a+32*b<<endl;
return 0;
}