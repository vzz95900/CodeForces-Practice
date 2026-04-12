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
ll a,b,c;
cin>>a>>b>>c;
ll n=a+b+c;
if(min(a,b)+c<max(a,b)){
    if(a>b){
    cout<<"First"<<endl;
}
else{
    cout<<"Second"<<endl;
}
}
else{
if(n%2==1){
    cout<<"First"<<endl;
}
else{
    cout<<"Second"<<endl;
}
}
}
return 0;
}