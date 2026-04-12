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
int a,b,c,x,y;
cin>>a>>b>>c>>x>>y;
if(a>=x && b>=y){
    yes
    continue;
}
bool ans=false;
if(a<x && b>y){
    if(a+c>=x){
        ans=true;
    }
}
else if(a>x && b<y){
    if(b+c>=y){
        ans=true;
    }
}
else{
    int z=a+c-x;
    if(z+b>=y){
        ans=true;
    }
}
if(ans) yes
else no
}
return 0;
}