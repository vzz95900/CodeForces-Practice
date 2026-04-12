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
int a,b,c;
cin>>a>>b>>c;
if(a==b && b==c){
    cout<<1<<" "<<1<<" "<<1<<endl;
    continue;
}
if(a==b && c<a){
    cout<<1<<" "<<1<<" "<<a-c+1<<endl;
    continue;
}
if(b==c && a<b){
    cout<<b-a+1<<" "<<1<<" "<<1<<endl;
    continue;
}
if(a==c && b<a){
    cout<<1<<" "<<a-b+1<<" "<<1<<endl;
    continue;
}
int neww=max(max(a,b),c);
if(a==neww){
    cout<<0<<" "<<a-b+1<<" "<<a-c+1<<endl;
}
else if(b==neww){
    cout<<b-a+1<<" "<<0<<" "<<b-c+1<<endl;
}
else{
    cout<<c-a+1<<" "<<c-b+1<<" "<<0<<endl;
}
}
return 0;
}