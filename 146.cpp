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
int a,b;
cin>>a>>b;
if(abs(a-b)%2==0){
    cout<<"Bob"<<endl;
}
else {
    cout<<"Alice"<<endl;
}

}
return 0;
}