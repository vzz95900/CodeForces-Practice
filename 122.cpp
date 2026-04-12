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
int x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
cin>>x4>>y4;
int ans=1;
if(x1!=x2){
    ans=abs(x1-x2);
    cout<<ans*ans<<endl;
}
else{
    ans=abs(x1-x3);
    cout<<ans*ans<<endl;
}
}
return 0;
}