#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
noch
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
int a1=a+b;
int a2=c-b;
int a3=d-c;
if(a1==a2 && a2==a3){
    cout<<3<<endl;
}
else if(a1==a2 || a2==a3 || a3==a1){
    cout<<2<<endl;
}
else{
    cout<<1<<endl;
}

}
return 0;
}