#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,y,x;
cin>>n>>y>>x;
int ans=0;
if(y<=x){
        ans=x-(x-y)%n;
}
cout<<ans<<endl;
}
return 0;
}