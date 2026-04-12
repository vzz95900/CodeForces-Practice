#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int m,a,b,c;
cin>>m>>a>>b>>c;
int r1=m;
int r2=m;
int ans=0;
if(a<=r1){
    ans+=a;
    r1-=a;
}
else{
    ans+=r1;
    r1=0;
}
if(b<=r2){
    ans+=b;
    r2-=b;
}
else{
    ans+=r2;
    r2=0;
}
if(c>=(r1+r2)){
    ans+=r1+r2;
}
else{
    ans+=c;
}
cout<<ans<<endl;
}
return 0;
}