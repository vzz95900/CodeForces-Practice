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
int n,m;
cin>>n>>m;
if(n<m){
    no
}
else{
    if((n-m)%2==0){
        yes
    }
    else no
}
}
return 0;
}