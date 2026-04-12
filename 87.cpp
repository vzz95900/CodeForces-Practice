#include<iostream>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
int w=max(c,d);
int x=min(c,d);
int y=max(a,b);
int z=min(a,b);

if(y>=x && w>=z){
    yes
}
else no
}
return 0;
}